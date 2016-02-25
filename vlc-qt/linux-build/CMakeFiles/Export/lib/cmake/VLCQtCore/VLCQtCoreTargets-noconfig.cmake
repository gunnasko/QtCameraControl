#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "VLCQt::Core" for configuration ""
set_property(TARGET VLCQt::Core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(VLCQt::Core PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libVLCQtCore.so.1.0.1"
  IMPORTED_SONAME_NOCONFIG "libVLCQtCore.so.1.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS VLCQt::Core )
list(APPEND _IMPORT_CHECK_FILES_FOR_VLCQt::Core "${_IMPORT_PREFIX}/lib/libVLCQtCore.so.1.0.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
