# Install script for directory: C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/install")
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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/src/core/VLCQtCore.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/src/core/VLCQtCore.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/src/core/VLCQtCore.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/src/core/RelWithDebInfo/VLCQtCore.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/src/core/Debug/VLCQtCore.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/src/core/Release/VLCQtCore.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/src/core/MinSizeRel/VLCQtCore.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/src/core/RelWithDebInfo/VLCQtCore.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/VLCQtCore" TYPE FILE FILES
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/Audio.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/Common.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/Enums.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/Error.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/Instance.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/Media.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/MediaList.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/MediaListPlayer.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/MediaPlayer.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/MetaManager.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/ModuleDescription.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/SharedExportCore.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/Stats.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/Video.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/VideoDelegate.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/VideoFrame.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/VideoMemoryStream.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/win-build-debug/src/Config.h"
    "C:/Users/gas/Documents/QtCameraControl/third-party_libs/vlc-qt/src/core/Equalizer.h"
    )
endif()

