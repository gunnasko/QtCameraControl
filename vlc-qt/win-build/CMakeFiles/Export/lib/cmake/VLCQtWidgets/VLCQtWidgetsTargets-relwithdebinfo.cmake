#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "VLCQt::Widgets" for configuration "RelWithDebInfo"
set_property(TARGET VLCQt::Widgets APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(VLCQt::Widgets PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/VLCQtWidgets.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/VLCQtWidgets.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS VLCQt::Widgets )
list(APPEND _IMPORT_CHECK_FILES_FOR_VLCQt::Widgets "${_IMPORT_PREFIX}/lib/VLCQtWidgets.lib" "${_IMPORT_PREFIX}/bin/VLCQtWidgets.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
