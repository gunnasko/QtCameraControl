INCLUDE("/home/andreas/CameraControl/vlc-qt/config/VLCQtCoreTargets.cmake")

IF(Linux MATCHES "Darwin")
    SET(VLCQtCoreFramework /home/andreas/CameraControl/vlc-qt/config/../../VLCQtCore.framework)
ELSE()
    GET_TARGET_PROPERTY(VLCQtCoreLocation VLCQt::Core INTERFACE_INCLUDE_DIRECTORIES)
    STRING(REGEX REPLACE "/include" "" VLCQtCoreLocation "")
ENDIF()
