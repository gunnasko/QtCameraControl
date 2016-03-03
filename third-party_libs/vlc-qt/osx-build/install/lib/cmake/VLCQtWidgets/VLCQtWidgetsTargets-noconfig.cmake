#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "VLCQt::Widgets" for configuration ""
set_property(TARGET VLCQt::Widgets APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(VLCQt::Widgets PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/VLCQtWidgets.framework/Versions/1.0.1/VLCQtWidgets"
  IMPORTED_SONAME_NOCONFIG "@rpath/VLCQtWidgets.framework/Versions/1.0.1/VLCQtWidgets"
  )

list(APPEND _IMPORT_CHECK_TARGETS VLCQt::Widgets )
list(APPEND _IMPORT_CHECK_FILES_FOR_VLCQt::Widgets "${_IMPORT_PREFIX}/lib/VLCQtWidgets.framework/Versions/1.0.1/VLCQtWidgets" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
