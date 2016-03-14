INCLUDE(CMakeFindDependencyMacro)
FIND_DEPENDENCY(VLCQtCore)

INCLUDE("C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/config/VLCQtQmlTargets.cmake")

SET_TARGET_PROPERTIES(VLCQt::Qml PROPERTIES
    INTERFACE_LINK_LIBRARIES VLCQt::Core
)

IF(Windows MATCHES "Darwin")
    SET(VLCQtQmlFramework C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/config/../../VLCQtQml.framework)
ELSE()
    GET_TARGET_PROPERTY(VLCQtQmlLocation VLCQt::Qml INTERFACE_INCLUDE_DIRECTORIES)
    STRING(REGEX REPLACE "/include" "" VLCQtQmlLocation "")
ENDIF()
