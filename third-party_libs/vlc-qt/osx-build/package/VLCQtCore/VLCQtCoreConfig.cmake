INCLUDE("/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/config/VLCQtCoreTargets.cmake")

IF(Darwin MATCHES "Darwin")
    SET(VLCQtCoreFramework /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/config/../../VLCQtCore.framework)
ELSE()
    GET_TARGET_PROPERTY(VLCQtCoreLocation VLCQt::Core INTERFACE_INCLUDE_DIRECTORIES)
    STRING(REGEX REPLACE "/include" "" VLCQtCoreLocation "")
ENDIF()
