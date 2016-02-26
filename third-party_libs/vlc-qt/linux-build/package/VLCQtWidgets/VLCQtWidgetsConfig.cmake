INCLUDE(CMakeFindDependencyMacro)
FIND_DEPENDENCY(VLCQtCore)

INCLUDE("/home/andreas/CameraControl/third-party_libs/vlc-qt/config/VLCQtWidgetsTargets.cmake")

SET_TARGET_PROPERTIES(VLCQt::Widgets PROPERTIES
    INTERFACE_LINK_LIBRARIES VLCQt::Core
)

IF(Linux MATCHES "Darwin")
    SET(VLCQtWidgetsFramework /home/andreas/CameraControl/third-party_libs/vlc-qt/config/../../VLCQtWidgets.framework)
ELSE()
    GET_TARGET_PROPERTY(VLCQtWidgetsLocation VLCQt::Widgets INTERFACE_INCLUDE_DIRECTORIES)
    STRING(REGEX REPLACE "/include" "" VLCQtWidgetsLocation "")
ENDIF()
