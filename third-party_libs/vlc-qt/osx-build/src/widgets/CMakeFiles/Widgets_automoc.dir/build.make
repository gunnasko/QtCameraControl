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

# Utility rule file for Widgets_automoc.

# Include the progress variables for this target.
include src/widgets/CMakeFiles/Widgets_automoc.dir/progress.make

src/widgets/CMakeFiles/Widgets_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc, uic and rcc for target Widgets"
	cd /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/src/widgets && /usr/local/Cellar/cmake/3.4.3/bin/cmake -E cmake_autogen /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/src/widgets/CMakeFiles/Widgets_automoc.dir/ ""

Widgets_automoc: src/widgets/CMakeFiles/Widgets_automoc
Widgets_automoc: src/widgets/CMakeFiles/Widgets_automoc.dir/build.make

.PHONY : Widgets_automoc

# Rule to build all files generated by this target.
src/widgets/CMakeFiles/Widgets_automoc.dir/build: Widgets_automoc

.PHONY : src/widgets/CMakeFiles/Widgets_automoc.dir/build

src/widgets/CMakeFiles/Widgets_automoc.dir/clean:
	cd /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/src/widgets && $(CMAKE_COMMAND) -P CMakeFiles/Widgets_automoc.dir/cmake_clean.cmake
.PHONY : src/widgets/CMakeFiles/Widgets_automoc.dir/clean

src/widgets/CMakeFiles/Widgets_automoc.dir/depend:
	cd /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andreas/QtCameraControl/third-party_libs/vlc-qt /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/src/widgets /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/src/widgets /Users/andreas/QtCameraControl/third-party_libs/vlc-qt/osx-build/src/widgets/CMakeFiles/Widgets_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/widgets/CMakeFiles/Widgets_automoc.dir/depend

