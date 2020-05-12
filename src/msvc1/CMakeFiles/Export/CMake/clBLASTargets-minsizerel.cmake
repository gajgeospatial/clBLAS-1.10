#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "clBLAS" for configuration "MinSizeRel"
set_property(TARGET clBLAS APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(clBLAS PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/import/clBLAS.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_MINSIZEREL "C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v10.2/lib/Win32/OpenCL.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/clBLAS.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS clBLAS )
list(APPEND _IMPORT_CHECK_FILES_FOR_clBLAS "${_IMPORT_PREFIX}/lib/import/clBLAS.lib" "${_IMPORT_PREFIX}/bin/clBLAS.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
