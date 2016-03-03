# Install script for directory: /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/src/core

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE DIRECTORY FILES "/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/src/core/VLCQtCore.framework" USE_SOURCE_PERMISSIONS)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/VLCQtCore.framework/Versions/1.0.1/VLCQtCore" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/VLCQtCore.framework/Versions/1.0.1/VLCQtCore")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/andreas/Qt/5.5/clang_64/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/VLCQtCore.framework/Versions/1.0.1/VLCQtCore")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/VLCQtCore.framework/Versions/1.0.1/VLCQtCore")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/VLCQtCore.framework/Versions/1.0.1/VLCQtCore")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  EXECUTE_PROCESS(COMMAND /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/tools/osx_vlc_plugins_postprocess.sh WORKING_DIRECTORY /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/install/lib/VLCQtCore.framework/Versions/1.0.1/lib/vlc/plugins)
endif()

