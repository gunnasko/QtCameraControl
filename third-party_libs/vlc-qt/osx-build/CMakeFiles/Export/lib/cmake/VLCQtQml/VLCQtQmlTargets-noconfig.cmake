#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "VLCQt::Qml" for configuration ""
set_property(TARGET VLCQt::Qml APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(VLCQt::Qml PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/VLCQtQml.framework/Versions/1.0.1/VLCQtQml"
  IMPORTED_SONAME_NOCONFIG "@rpath/VLCQtQml.framework/Versions/1.0.1/VLCQtQml"
  )

list(APPEND _IMPORT_CHECK_TARGETS VLCQt::Qml )
list(APPEND _IMPORT_CHECK_FILES_FOR_VLCQt::Qml "${_IMPORT_PREFIX}/lib/VLCQtQml.framework/Versions/1.0.1/VLCQtQml" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
