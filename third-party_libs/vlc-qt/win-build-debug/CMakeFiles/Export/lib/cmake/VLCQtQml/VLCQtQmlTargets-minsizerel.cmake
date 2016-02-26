#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "VLCQt::Qml" for configuration "MinSizeRel"
set_property(TARGET VLCQt::Qml APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(VLCQt::Qml PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/VLCQtQml.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/VLCQtQml.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS VLCQt::Qml )
list(APPEND _IMPORT_CHECK_FILES_FOR_VLCQt::Qml "${_IMPORT_PREFIX}/lib/VLCQtQml.lib" "${_IMPORT_PREFIX}/bin/VLCQtQml.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
