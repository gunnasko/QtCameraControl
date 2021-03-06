# Install script for directory: C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/widgets

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build/src/widgets/VLCQtWidgets.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build/src/widgets/VLCQtWidgets.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build/src/widgets/VLCQtWidgets.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build/src/widgets/RelWithDebInfo/VLCQtWidgets.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build/src/widgets/Debug/VLCQtWidgets.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build/src/widgets/Release/VLCQtWidgets.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build/src/widgets/MinSizeRel/VLCQtWidgets.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build/src/widgets/RelWithDebInfo/VLCQtWidgets.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/VLCQtWidgets" TYPE FILE FILES
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/widgets/ControlAudio.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/widgets/ControlVideo.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/widgets/SharedExportWidgets.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/widgets/WidgetSeek.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/widgets/WidgetSeekProgress.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/widgets/WidgetVideo.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/widgets/WidgetVolumeSlider.h"
    )
endif()

