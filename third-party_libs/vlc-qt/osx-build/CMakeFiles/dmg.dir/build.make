# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.4.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.4.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/andreas/QtCameraControl/third-party_libs/vlc-qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build

# Utility rule file for dmg.

# Include the progress variables for this target.
include CMakeFiles/dmg.dir/progress.make

CMakeFiles/dmg:
	/Users/andreas/Qt/5.5/clang_64/bin/macdeployqt /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/install/bin/VLC-Qt.app -dmg

dmg: CMakeFiles/dmg
dmg: CMakeFiles/dmg.dir/build.make

.PHONY : dmg

# Rule to build all files generated by this target.
CMakeFiles/dmg.dir/build: dmg

.PHONY : CMakeFiles/dmg.dir/build

CMakeFiles/dmg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dmg.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dmg.dir/clean

CMakeFiles/dmg.dir/depend:
	cd /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andreas/QtCameraControl/third-party_libs/vlc-qt /Users/andreas/QtCameraControl/third-party_libs/vlc-qt /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/CMakeFiles/dmg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dmg.dir/depend

