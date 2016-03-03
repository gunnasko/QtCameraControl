# Install script for directory: /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/tests

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/install")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE DIRECTORY FILES "/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/tests/VLC-Qt.app" USE_SOURCE_PERMISSIONS)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/VLC-Qt.app/Contents/MacOS/VLC-Qt" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/VLC-Qt.app/Contents/MacOS/VLC-Qt")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/andreas/Qt/5.5/clang_64/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/VLC-Qt.app/Contents/MacOS/VLC-Qt")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/Users/andreas/Qt/5.5/clang_64/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/VLC-Qt.app/Contents/MacOS/VLC-Qt")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/VLC-Qt.app/Contents/MacOS/VLC-Qt")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/VLC-Qt.app/Contents/Frameworks/VLCQtCore.framework" TYPE DIRECTORY FILES "/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/install/lib/VLCQtCore.framework/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/VLC-Qt.app/Contents/Frameworks/VLCQtQml.framework" TYPE DIRECTORY FILES "/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/install/lib/VLCQtQml.framework/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/VLC-Qt.app/Contents/Frameworks/VLCQtWidgets.framework" TYPE DIRECTORY FILES "/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/install/lib/VLCQtWidgets.framework/")
endif()

