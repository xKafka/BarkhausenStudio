# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /snap/clion/145/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/145/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fkafka/QtProjects/Barkhausen_studio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug

# Include any dependencies generated for this target.
include barkhausen_studio/kernel/api/CMakeFiles/api.dir/depend.make

# Include the progress variables for this target.
include barkhausen_studio/kernel/api/CMakeFiles/api.dir/progress.make

# Include the compile flags for this target's objects.
include barkhausen_studio/kernel/api/CMakeFiles/api.dir/flags.make

barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/barkhausen_studio.cpp.o: barkhausen_studio/kernel/api/CMakeFiles/api.dir/flags.make
barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/barkhausen_studio.cpp.o: ../barkhausen_studio/kernel/api/src/barkhausen_studio.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/barkhausen_studio.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/api && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/api.dir/src/barkhausen_studio.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/api/src/barkhausen_studio.cpp

barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/barkhausen_studio.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/api.dir/src/barkhausen_studio.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/api/src/barkhausen_studio.cpp > CMakeFiles/api.dir/src/barkhausen_studio.cpp.i

barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/barkhausen_studio.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/api.dir/src/barkhausen_studio.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/api/src/barkhausen_studio.cpp -o CMakeFiles/api.dir/src/barkhausen_studio.cpp.s

barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/main.cpp.o: barkhausen_studio/kernel/api/CMakeFiles/api.dir/flags.make
barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/main.cpp.o: ../barkhausen_studio/kernel/api/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/main.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/api && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/api.dir/src/main.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/api/src/main.cpp

barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/api.dir/src/main.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/api/src/main.cpp > CMakeFiles/api.dir/src/main.cpp.i

barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/api.dir/src/main.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/api && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/api/src/main.cpp -o CMakeFiles/api.dir/src/main.cpp.s

# Object files for target api
api_OBJECTS = \
"CMakeFiles/api.dir/src/barkhausen_studio.cpp.o" \
"CMakeFiles/api.dir/src/main.cpp.o"

# External object files for target api
api_EXTERNAL_OBJECTS =

barkhausen_studio/kernel/api/api: barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/barkhausen_studio.cpp.o
barkhausen_studio/kernel/api/api: barkhausen_studio/kernel/api/CMakeFiles/api.dir/src/main.cpp.o
barkhausen_studio/kernel/api/api: barkhausen_studio/kernel/api/CMakeFiles/api.dir/build.make
barkhausen_studio/kernel/api/api: barkhausen_studio/kernel/command_multiplexer/libmodule_multiplexer.a
barkhausen_studio/kernel/api/api: ui/MainWindow/libmain_window.a
barkhausen_studio/kernel/api/api: ui/current_chart/libcurrent_chart.a
barkhausen_studio/kernel/api/api: /usr/lib/x86_64-linux-gnu/libQt5Charts.so.5.12.8
barkhausen_studio/kernel/api/api: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
barkhausen_studio/kernel/api/api: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
barkhausen_studio/kernel/api/api: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
barkhausen_studio/kernel/api/api: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
barkhausen_studio/kernel/api/api: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
barkhausen_studio/kernel/api/api: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
barkhausen_studio/kernel/api/api: barkhausen_studio/kernel/measurement_devices/current_measurement/libcurrent_measurement_device.a
barkhausen_studio/kernel/api/api: external/fmt/libfmtd.a
barkhausen_studio/kernel/api/api: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
barkhausen_studio/kernel/api/api: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
barkhausen_studio/kernel/api/api: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
barkhausen_studio/kernel/api/api: /usr/lib/x86_64-linux-gnu/libpython2.7.so
barkhausen_studio/kernel/api/api: barkhausen_studio/kernel/api/CMakeFiles/api.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable api"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/api && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/api.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
barkhausen_studio/kernel/api/CMakeFiles/api.dir/build: barkhausen_studio/kernel/api/api

.PHONY : barkhausen_studio/kernel/api/CMakeFiles/api.dir/build

barkhausen_studio/kernel/api/CMakeFiles/api.dir/clean:
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/api && $(CMAKE_COMMAND) -P CMakeFiles/api.dir/cmake_clean.cmake
.PHONY : barkhausen_studio/kernel/api/CMakeFiles/api.dir/clean

barkhausen_studio/kernel/api/CMakeFiles/api.dir/depend:
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fkafka/QtProjects/Barkhausen_studio /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/api /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/api /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/api/CMakeFiles/api.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : barkhausen_studio/kernel/api/CMakeFiles/api.dir/depend

