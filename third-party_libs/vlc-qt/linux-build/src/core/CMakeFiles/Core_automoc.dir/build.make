# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /home/andreas/cmake-3.5.0-rc3-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/andreas/cmake-3.5.0-rc3-Linux-x86_64/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/andreas/CameraControl/third-party_libs/vlc-qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build

# Utility rule file for Core_automoc.

# Include the progress variables for this target.
include src/core/CMakeFiles/Core_automoc.dir/progress.make

src/core/CMakeFiles/Core_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc, uic and rcc for target Core"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/core && /home/andreas/cmake-3.5.0-rc3-Linux-x86_64/bin/cmake -E cmake_autogen /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/core/CMakeFiles/Core_automoc.dir/ ""

Core_automoc: src/core/CMakeFiles/Core_automoc
Core_automoc: src/core/CMakeFiles/Core_automoc.dir/build.make

.PHONY : Core_automoc

# Rule to build all files generated by this target.
src/core/CMakeFiles/Core_automoc.dir/build: Core_automoc

.PHONY : src/core/CMakeFiles/Core_automoc.dir/build

src/core/CMakeFiles/Core_automoc.dir/clean:
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/core && $(CMAKE_COMMAND) -P CMakeFiles/Core_automoc.dir/cmake_clean.cmake
.PHONY : src/core/CMakeFiles/Core_automoc.dir/clean

src/core/CMakeFiles/Core_automoc.dir/depend:
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andreas/CameraControl/third-party_libs/vlc-qt /home/andreas/CameraControl/third-party_libs/vlc-qt/src/core /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/core /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/core/CMakeFiles/Core_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/core/CMakeFiles/Core_automoc.dir/depend

