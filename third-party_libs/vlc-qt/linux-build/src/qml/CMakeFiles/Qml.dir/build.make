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

# Include any dependencies generated for this target.
include src/qml/CMakeFiles/Qml.dir/depend.make

# Include the progress variables for this target.
include src/qml/CMakeFiles/Qml.dir/progress.make

# Include the compile flags for this target's objects.
include src/qml/CMakeFiles/Qml.dir/flags.make

src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o: src/qml/CMakeFiles/Qml.dir/flags.make
src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o: ../src/qml/QmlVideoObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Qml.dir/QmlVideoObject.cpp.o -c /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/QmlVideoObject.cpp

src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Qml.dir/QmlVideoObject.cpp.i"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/QmlVideoObject.cpp > CMakeFiles/Qml.dir/QmlVideoObject.cpp.i

src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Qml.dir/QmlVideoObject.cpp.s"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/QmlVideoObject.cpp -o CMakeFiles/Qml.dir/QmlVideoObject.cpp.s

src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o.requires:

.PHONY : src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o.requires

src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o.provides: src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o.requires
	$(MAKE) -f src/qml/CMakeFiles/Qml.dir/build.make src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o.provides.build
.PHONY : src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o.provides

src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o.provides.build: src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o


src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o: src/qml/CMakeFiles/Qml.dir/flags.make
src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o: ../src/qml/QmlVideoPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o -c /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/QmlVideoPlayer.cpp

src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.i"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/QmlVideoPlayer.cpp > CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.i

src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.s"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/QmlVideoPlayer.cpp -o CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.s

src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o.requires:

.PHONY : src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o.requires

src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o.provides: src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o.requires
	$(MAKE) -f src/qml/CMakeFiles/Qml.dir/build.make src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o.provides.build
.PHONY : src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o.provides

src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o.provides.build: src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o


src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o: src/qml/CMakeFiles/Qml.dir/flags.make
src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o: ../src/qml/painter/GlPainter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Qml.dir/painter/GlPainter.cpp.o -c /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/painter/GlPainter.cpp

src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Qml.dir/painter/GlPainter.cpp.i"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/painter/GlPainter.cpp > CMakeFiles/Qml.dir/painter/GlPainter.cpp.i

src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Qml.dir/painter/GlPainter.cpp.s"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/painter/GlPainter.cpp -o CMakeFiles/Qml.dir/painter/GlPainter.cpp.s

src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o.requires:

.PHONY : src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o.requires

src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o.provides: src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o.requires
	$(MAKE) -f src/qml/CMakeFiles/Qml.dir/build.make src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o.provides.build
.PHONY : src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o.provides

src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o.provides.build: src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o


src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o: src/qml/CMakeFiles/Qml.dir/flags.make
src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o: ../src/qml/painter/GlslPainter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o -c /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/painter/GlslPainter.cpp

src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Qml.dir/painter/GlslPainter.cpp.i"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/painter/GlslPainter.cpp > CMakeFiles/Qml.dir/painter/GlslPainter.cpp.i

src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Qml.dir/painter/GlslPainter.cpp.s"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml/painter/GlslPainter.cpp -o CMakeFiles/Qml.dir/painter/GlslPainter.cpp.s

src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o.requires:

.PHONY : src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o.requires

src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o.provides: src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o.requires
	$(MAKE) -f src/qml/CMakeFiles/Qml.dir/build.make src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o.provides.build
.PHONY : src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o.provides

src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o.provides.build: src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o


src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o: src/qml/CMakeFiles/Qml.dir/flags.make
src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o: src/qml/Qml_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Qml.dir/Qml_automoc.cpp.o -c /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml/Qml_automoc.cpp

src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Qml.dir/Qml_automoc.cpp.i"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml/Qml_automoc.cpp > CMakeFiles/Qml.dir/Qml_automoc.cpp.i

src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Qml.dir/Qml_automoc.cpp.s"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml/Qml_automoc.cpp -o CMakeFiles/Qml.dir/Qml_automoc.cpp.s

src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o.requires:

.PHONY : src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o.requires

src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o.provides: src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o.requires
	$(MAKE) -f src/qml/CMakeFiles/Qml.dir/build.make src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o.provides.build
.PHONY : src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o.provides

src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o.provides.build: src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o


# Object files for target Qml
Qml_OBJECTS = \
"CMakeFiles/Qml.dir/QmlVideoObject.cpp.o" \
"CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o" \
"CMakeFiles/Qml.dir/painter/GlPainter.cpp.o" \
"CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o" \
"CMakeFiles/Qml.dir/Qml_automoc.cpp.o"

# External object files for target Qml
Qml_EXTERNAL_OBJECTS =

src/qml/libVLCQtQml.so.1.0.1: src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o
src/qml/libVLCQtQml.so.1.0.1: src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o
src/qml/libVLCQtQml.so.1.0.1: src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o
src/qml/libVLCQtQml.so.1.0.1: src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o
src/qml/libVLCQtQml.so.1.0.1: src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o
src/qml/libVLCQtQml.so.1.0.1: src/qml/CMakeFiles/Qml.dir/build.make
src/qml/libVLCQtQml.so.1.0.1: /home/andreas/Qt/5.5/gcc_64/lib/libQt5Quick.so.5.5.1
src/qml/libVLCQtQml.so.1.0.1: src/core/libVLCQtCore.so
src/qml/libVLCQtQml.so.1.0.1: /usr/local/lib/libvlccore.so
src/qml/libVLCQtQml.so.1.0.1: /home/andreas/Qt/5.5/gcc_64/lib/libQt5Gui.so.5.5.1
src/qml/libVLCQtQml.so.1.0.1: /home/andreas/Qt/5.5/gcc_64/lib/libQt5Qml.so.5.5.1
src/qml/libVLCQtQml.so.1.0.1: /home/andreas/Qt/5.5/gcc_64/lib/libQt5Network.so.5.5.1
src/qml/libVLCQtQml.so.1.0.1: /home/andreas/Qt/5.5/gcc_64/lib/libQt5Core.so.5.5.1
src/qml/libVLCQtQml.so.1.0.1: src/qml/CMakeFiles/Qml.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library libVLCQtQml.so"
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Qml.dir/link.txt --verbose=$(VERBOSE)
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && $(CMAKE_COMMAND) -E cmake_symlink_library libVLCQtQml.so.1.0.1 libVLCQtQml.so.1.0 libVLCQtQml.so

src/qml/libVLCQtQml.so.1.0: src/qml/libVLCQtQml.so.1.0.1
	@$(CMAKE_COMMAND) -E touch_nocreate src/qml/libVLCQtQml.so.1.0

src/qml/libVLCQtQml.so: src/qml/libVLCQtQml.so.1.0.1
	@$(CMAKE_COMMAND) -E touch_nocreate src/qml/libVLCQtQml.so

# Rule to build all files generated by this target.
src/qml/CMakeFiles/Qml.dir/build: src/qml/libVLCQtQml.so

.PHONY : src/qml/CMakeFiles/Qml.dir/build

src/qml/CMakeFiles/Qml.dir/requires: src/qml/CMakeFiles/Qml.dir/QmlVideoObject.cpp.o.requires
src/qml/CMakeFiles/Qml.dir/requires: src/qml/CMakeFiles/Qml.dir/QmlVideoPlayer.cpp.o.requires
src/qml/CMakeFiles/Qml.dir/requires: src/qml/CMakeFiles/Qml.dir/painter/GlPainter.cpp.o.requires
src/qml/CMakeFiles/Qml.dir/requires: src/qml/CMakeFiles/Qml.dir/painter/GlslPainter.cpp.o.requires
src/qml/CMakeFiles/Qml.dir/requires: src/qml/CMakeFiles/Qml.dir/Qml_automoc.cpp.o.requires

.PHONY : src/qml/CMakeFiles/Qml.dir/requires

src/qml/CMakeFiles/Qml.dir/clean:
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml && $(CMAKE_COMMAND) -P CMakeFiles/Qml.dir/cmake_clean.cmake
.PHONY : src/qml/CMakeFiles/Qml.dir/clean

src/qml/CMakeFiles/Qml.dir/depend:
	cd /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andreas/CameraControl/third-party_libs/vlc-qt /home/andreas/CameraControl/third-party_libs/vlc-qt/src/qml /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml /home/andreas/CameraControl/third-party_libs/vlc-qt/linux-build/src/qml/CMakeFiles/Qml.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/qml/CMakeFiles/Qml.dir/depend

