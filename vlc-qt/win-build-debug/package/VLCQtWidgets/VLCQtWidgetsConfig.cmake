INCLUDE(CMakeFindDependencyMacro)
FIND_DEPENDENCY(VLCQtCore)

INCLUDE("C:/Users/gas/Documents/QtCameraControl/vlc-qt/config/VLCQtWidgetsTargets.cmake")

SET_TARGET_PROPERTIES(VLCQt::Widgets PROPERTIES
    INTERFACE_LINK_LIBRARIES VLCQt::Core
)

IF(Windows MATCHES "Darwin")
    SET(VLCQtWidgetsFramework C:/Users/gas/Documents/QtCameraControl/vlc-qt/config/../../VLCQtWidgets.framework)
ELSE()
    GET_TARGET_PROPERTY(VLCQtWidgetsLocation VLCQt::Widgets INTERFACE_INCLUDE_DIRECTORIES)
    STRING(REGEX REPLACE "/include" "" VLCQtWidgetsLocation "")
ENDIF()
