#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "VLCQt::Core" for configuration "RelWithDebInfo"
set_property(TARGET VLCQt::Core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(VLCQt::Core PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/VLCQtCore.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/VLCQtCore.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS VLCQt::Core )
list(APPEND _IMPORT_CHECK_FILES_FOR_VLCQt::Core "${_IMPORT_PREFIX}/lib/VLCQtCore.lib" "${_IMPORT_PREFIX}/bin/VLCQtCore.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
