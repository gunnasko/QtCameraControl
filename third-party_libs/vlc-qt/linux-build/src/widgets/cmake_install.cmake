# Install script for directory: /home/andreas/CameraControl/third-party_libs/vlc-qt/src/widgets

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVLCQtWidgets.so.1.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVLCQtWidgets.so.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVLCQtWidgets.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/widgets/libVLCQtWidgets.so.1.0.1"
    "/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/widgets/libVLCQtWidgets.so.1.0"
    "/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/widgets/libVLCQtWidgets.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVLCQtWidgets.so.1.0.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVLCQtWidgets.so.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVLCQtWidgets.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/core:/home/andreas/Qt/5.5/gcc_64/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/VLCQtWidgets" TYPE FILE FILES
    "/home/andreas/CameraControl/third-party_libs/vlc-qt/src/widgets/ControlAudio.h"
    "/home/andreas/CameraControl/third-party_libs/vlc-qt/src/widgets/ControlVideo.h"
    "/home/andreas/CameraControl/third-party_libs/vlc-qt/src/widgets/SharedExportWidgets.h"
    "/home/andreas/CameraControl/third-party_libs/vlc-qt/src/widgets/WidgetSeek.h"
    "/home/andreas/CameraControl/third-party_libs/vlc-qt/src/widgets/WidgetSeekProgress.h"
    "/home/andreas/CameraControl/third-party_libs/vlc-qt/src/widgets/WidgetVideo.h"
    "/home/andreas/CameraControl/third-party_libs/vlc-qt/src/widgets/WidgetVolumeSlider.h"
    )
endif()

