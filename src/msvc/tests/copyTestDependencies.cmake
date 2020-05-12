# Customized install script for fftw test program; analyzes all the shared library dependencies and installs
# the dependencies into the package
include( GetPrerequisites )

#    message( testLocation ": C:/Development/op3d_active/clBLAS-1.10/src/msvc/staging/$(Configuration)/test-correctness.exe" )

# The Microsoft IDE presents a challenge because the full configuration is not known at cmake time
# This logic allows us to 'substitute' the proper confguration at install time
if( "${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "Debug" )
    string( REPLACE "\$(Configuration)" "Debug" fixedTestLocation "C:/Development/op3d_active/clBLAS-1.10/src/msvc/staging/$(Configuration)/test-correctness.exe" )
elseif( "${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "Release" )
    string( REPLACE "\$(Configuration)" "Release" fixedTestLocation "C:/Development/op3d_active/clBLAS-1.10/src/msvc/staging/$(Configuration)/test-correctness.exe" )
elseif( "${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "MinSizeRel" )
    string( REPLACE "\$(Configuration)" "MinSizeRel" fixedTestLocation "C:/Development/op3d_active/clBLAS-1.10/src/msvc/staging/$(Configuration)/test-correctness.exe" )
elseif( "${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "RelwithDebInfo" )
    string( REPLACE "\$(Configuration)" "RelwithDebInfo" fixedTestLocation "C:/Development/op3d_active/clBLAS-1.10/src/msvc/staging/$(Configuration)/test-correctness.exe" )
endif( )

#    message( fixedTestLocation ": ${fixedTestLocation}" )
# Get the directory that the test executable resides in; this helps get_prerequisites( ) find dependent libraries
get_filename_component( testDir "${fixedTestLocation}" PATH )
#    message( testDir ": ${testDir}" )

set( installPath "" )
if( WIN32 )
    set( installPath "${CMAKE_INSTALL_PREFIX}/bin" )
else( )
    set( installPath "${CMAKE_INSTALL_PREFIX}/lib" )
endif( )

# Only search for dependencies that have ROOT defined
set( depList "" )

#This logic assumes that clBLAS CMakeLists.txt has been called
get_filename_component( acmlDir "" PATH )

if( EXISTS "${acmlDir}" )
    list( APPEND depList "${acmlDir}" )
#    message( "acmlDir: ${acmlDir}" )
endif( )

#This logic assumes that FindGTest.cmake has been called
get_filename_component( gtestDir "" PATH )
get_filename_component( gtestDirDebug "" PATH )

if( EXISTS "${gtestDir}" )
    list( APPEND depList "${gtestDir}" )
#    message( "gtestDir: ${gtestDir}" )
endif( )

string( COMPARE NOTEQUAL "${gtestDir}" "${gtestDirDebug}" gtestDiffDirs )
if( ${gtestDiffDirs} AND EXISTS "${gtestDirDebug}" )
    list( APPEND depList "${gtestDirDebug}" )
#    message( "gtestDirDebug: ${gtestDirDebug}" )
endif( )

#This logic assumes that FindOpenCL.cmake has been called
get_filename_component( openclDir "C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v10.2/lib/Win32/OpenCL.lib" PATH )

if( EXISTS "${openclDir}" )
    if( WIN32 )
        # On Windows, we need to substitute the lib/ directory for the bin/ directory; the former holds the .lib and the latter holds the .dll
        STRING( REGEX REPLACE "/lib/" "/bin/" openclDir ${openclDir} )
    endif( )

    list( APPEND depList "${openclDir}" )
#    message( "openclDir: ${openclDir}" )
endif( )
 
if( EXISTS "${testDir}" )
    list( APPEND depList "${testDir}" )
    # On linux, the .so files are not staged with the rest of the executables
    if( UNIX )
       list( APPEND depList "${testDir}/../library" )
    endif( )
endif( )

# message( "depList: ${depList}" )

# This retrieves a list of shared library dependencies from the target; they are not full path names
# Skip system dependencies and skip recursion
get_prerequisites( ${fixedTestLocation} testDependencies 1 0 "" "${depList}" )

# Loop on queried library dependencies and copy them into package
foreach( dep ${testDependencies} )
    # This converts the dependency into a full path
    gp_resolve_item( "${fixedTestLocation}" "${dep}" "" "${depList}" dep_test_path )

    # In linux, the dep_test_path may point to a symbolic link, we also need to copy real file
    get_filename_component( dep_realpath "${dep_test_path}" REALPATH )
    get_filename_component( dep_name "${dep_test_path}" NAME )
    # message( STATUS "depName: ${dep_name}" )
    # message( STATUS "depFullPath: ${dep_test_path}" )
    # message( STATUS "dep_realpath: ${dep_realpath}" )

    if( NOT EXISTS ${installPath}/${dep_name} )
        file( INSTALL ${dep_test_path} ${dep_realpath}
              USE_SOURCE_PERMISSIONS
              DESTINATION ${installPath}
            )
    endif( )
endforeach( )
