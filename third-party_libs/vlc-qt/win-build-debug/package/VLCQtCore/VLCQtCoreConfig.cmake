INCLUDE("C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/config/VLCQtCoreTargets.cmake")

IF(Windows MATCHES "Darwin")
    SET(VLCQtCoreFramework C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/config/../../VLCQtCore.framework)
ELSE()
    GET_TARGET_PROPERTY(VLCQtCoreLocation VLCQt::Core INTERFACE_INCLUDE_DIRECTORIES)
    STRING(REGEX REPLACE "/include" "" VLCQtCoreLocation "")
ENDIF()
