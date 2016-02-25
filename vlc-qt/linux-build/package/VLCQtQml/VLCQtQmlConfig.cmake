INCLUDE(CMakeFindDependencyMacro)
FIND_DEPENDENCY(VLCQtCore)

INCLUDE("/home/andreas/CameraControl/vlc-qt/config/VLCQtQmlTargets.cmake")

SET_TARGET_PROPERTIES(VLCQt::Qml PROPERTIES
    INTERFACE_LINK_LIBRARIES VLCQt::Core
)

IF(Linux MATCHES "Darwin")
    SET(VLCQtQmlFramework /home/andreas/CameraControl/vlc-qt/config/../../VLCQtQml.framework)
ELSE()
    GET_TARGET_PROPERTY(VLCQtQmlLocation VLCQt::Qml INTERFACE_INCLUDE_DIRECTORIES)
    STRING(REGEX REPLACE "/include" "" VLCQtQmlLocation "")
ENDIF()
