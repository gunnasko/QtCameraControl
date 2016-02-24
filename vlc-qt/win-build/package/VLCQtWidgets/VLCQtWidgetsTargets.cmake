# Generated by CMake 3.5.0-rc3

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget VLCQt::Widgets)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target VLCQt::Widgets
add_library(VLCQt::Widgets SHARED IMPORTED)

# Import target "VLCQt::Widgets" for configuration "Debug"
set_property(TARGET VLCQt::Widgets APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(VLCQt::Widgets PROPERTIES
  IMPORTED_IMPLIB_DEBUG "C:/Users/gas/Documents/QtCameraControl/vlc-qt/win-build/src/widgets/VLCQtWidgets.lib"
  IMPORTED_LOCATION_DEBUG "C:/Users/gas/Documents/QtCameraControl/vlc-qt/win-build/src/widgets/Debug/VLCQtWidgets.dll"
  )

# Import target "VLCQt::Widgets" for configuration "Release"
set_property(TARGET VLCQt::Widgets APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(VLCQt::Widgets PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Users/gas/Documents/QtCameraControl/vlc-qt/win-build/src/widgets/VLCQtWidgets.lib"
  IMPORTED_LOCATION_RELEASE "C:/Users/gas/Documents/QtCameraControl/vlc-qt/win-build/src/widgets/Release/VLCQtWidgets.dll"
  )

# Import target "VLCQt::Widgets" for configuration "MinSizeRel"
set_property(TARGET VLCQt::Widgets APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(VLCQt::Widgets PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "C:/Users/gas/Documents/QtCameraControl/vlc-qt/win-build/src/widgets/VLCQtWidgets.lib"
  IMPORTED_LOCATION_MINSIZEREL "C:/Users/gas/Documents/QtCameraControl/vlc-qt/win-build/src/widgets/MinSizeRel/VLCQtWidgets.dll"
  )

# Import target "VLCQt::Widgets" for configuration "RelWithDebInfo"
set_property(TARGET VLCQt::Widgets APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(VLCQt::Widgets PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "C:/Users/gas/Documents/QtCameraControl/vlc-qt/win-build/src/widgets/RelWithDebInfo/VLCQtWidgets.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "C:/Users/gas/Documents/QtCameraControl/vlc-qt/win-build/src/widgets/RelWithDebInfo/VLCQtWidgets.dll"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
