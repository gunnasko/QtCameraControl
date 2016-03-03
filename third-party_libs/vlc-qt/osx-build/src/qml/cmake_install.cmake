# Install script for directory: /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/src/qml

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE DIRECTORY FILES "/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/src/qml/VLCQtQml.framework" USE_SOURCE_PERMISSIONS)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/VLCQtQml.framework/Versions/1.0.1/VLCQtQml" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/VLCQtQml.framework/Versions/1.0.1/VLCQtQml")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/andreas/Qt/5.5/clang_64/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/VLCQtQml.framework/Versions/1.0.1/VLCQtQml")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/VLCQtQml.framework/Versions/1.0.1/VLCQtQml")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/VLCQtQml.framework/Versions/1.0.1/VLCQtQml")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/install/lib/VLCQtQml.framework/Versions/1.0.1/lib/libvlc.5.dylib;/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/install/lib/VLCQtQml.framework/Versions/1.0.1/lib/libvlc.dylib;/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/install/lib/VLCQtQml.framework/Versions/1.0.1/lib/libvlccore.8.dylib;/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/install/lib/VLCQtQml.framework/Versions/1.0.1/lib/libvlccore.dylib")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/install/lib/VLCQtQml.framework/Versions/1.0.1/lib" TYPE FILE FILES
    "/Users/andreas/QtCameraControl/third-party_libs/vlc-sdk/osx/64bit//lib/libvlc.5.dylib"
    "/Users/andreas/QtCameraControl/third-party_libs/vlc-sdk/osx/64bit//lib/libvlc.dylib"
    "/Users/andreas/QtCameraControl/third-party_libs/vlc-sdk/osx/64bit//lib/libvlccore.8.dylib"
    "/Users/andreas/QtCameraControl/third-party_libs/vlc-sdk/osx/64bit//lib/libvlccore.dylib"
    )
endif()

