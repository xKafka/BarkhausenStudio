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
include ui/current_chart/CMakeFiles/current_chart.dir/depend.make

# Include the progress variables for this target.
include ui/current_chart/CMakeFiles/current_chart.dir/progress.make

# Include the compile flags for this target's objects.
include ui/current_chart/CMakeFiles/current_chart.dir/flags.make

ui/current_chart/include/moc_currentchart.cpp: ../ui/current_chart/include/currentchart.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating include/moc_currentchart.cpp"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart/include && /usr/lib/qt5/bin/moc @/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart/include/moc_currentchart.cpp_parameters

ui/current_chart/ui_currentchart.h: ../ui/current_chart/src/currentchart.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_currentchart.h"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && /usr/lib/qt5/bin/uic -o /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart/ui_currentchart.h /home/fkafka/QtProjects/Barkhausen_studio/ui/current_chart/src/currentchart.ui

ui/current_chart/CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.o: ui/current_chart/CMakeFiles/current_chart.dir/flags.make
ui/current_chart/CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.o: ui/current_chart/current_chart_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object ui/current_chart/CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart/current_chart_autogen/mocs_compilation.cpp

ui/current_chart/CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart/current_chart_autogen/mocs_compilation.cpp > CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.i

ui/current_chart/CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart/current_chart_autogen/mocs_compilation.cpp -o CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.s

ui/current_chart/CMakeFiles/current_chart.dir/src/currentchart.cpp.o: ui/current_chart/CMakeFiles/current_chart.dir/flags.make
ui/current_chart/CMakeFiles/current_chart.dir/src/currentchart.cpp.o: ../ui/current_chart/src/currentchart.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object ui/current_chart/CMakeFiles/current_chart.dir/src/currentchart.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/current_chart.dir/src/currentchart.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/ui/current_chart/src/currentchart.cpp

ui/current_chart/CMakeFiles/current_chart.dir/src/currentchart.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/current_chart.dir/src/currentchart.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/ui/current_chart/src/currentchart.cpp > CMakeFiles/current_chart.dir/src/currentchart.cpp.i

ui/current_chart/CMakeFiles/current_chart.dir/src/currentchart.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/current_chart.dir/src/currentchart.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/ui/current_chart/src/currentchart.cpp -o CMakeFiles/current_chart.dir/src/currentchart.cpp.s

ui/current_chart/CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.o: ui/current_chart/CMakeFiles/current_chart.dir/flags.make
ui/current_chart/CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.o: ui/current_chart/include/moc_currentchart.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object ui/current_chart/CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart/include/moc_currentchart.cpp

ui/current_chart/CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart/include/moc_currentchart.cpp > CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.i

ui/current_chart/CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart/include/moc_currentchart.cpp -o CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.s

# Object files for target current_chart
current_chart_OBJECTS = \
"CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/current_chart.dir/src/currentchart.cpp.o" \
"CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.o"

# External object files for target current_chart
current_chart_EXTERNAL_OBJECTS =

ui/current_chart/libcurrent_chart.a: ui/current_chart/CMakeFiles/current_chart.dir/current_chart_autogen/mocs_compilation.cpp.o
ui/current_chart/libcurrent_chart.a: ui/current_chart/CMakeFiles/current_chart.dir/src/currentchart.cpp.o
ui/current_chart/libcurrent_chart.a: ui/current_chart/CMakeFiles/current_chart.dir/include/moc_currentchart.cpp.o
ui/current_chart/libcurrent_chart.a: ui/current_chart/CMakeFiles/current_chart.dir/build.make
ui/current_chart/libcurrent_chart.a: ui/current_chart/CMakeFiles/current_chart.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libcurrent_chart.a"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && $(CMAKE_COMMAND) -P CMakeFiles/current_chart.dir/cmake_clean_target.cmake
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/current_chart.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ui/current_chart/CMakeFiles/current_chart.dir/build: ui/current_chart/libcurrent_chart.a

.PHONY : ui/current_chart/CMakeFiles/current_chart.dir/build

ui/current_chart/CMakeFiles/current_chart.dir/clean:
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart && $(CMAKE_COMMAND) -P CMakeFiles/current_chart.dir/cmake_clean.cmake
.PHONY : ui/current_chart/CMakeFiles/current_chart.dir/clean

ui/current_chart/CMakeFiles/current_chart.dir/depend: ui/current_chart/include/moc_currentchart.cpp
ui/current_chart/CMakeFiles/current_chart.dir/depend: ui/current_chart/ui_currentchart.h
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fkafka/QtProjects/Barkhausen_studio /home/fkafka/QtProjects/Barkhausen_studio/ui/current_chart /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/current_chart/CMakeFiles/current_chart.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ui/current_chart/CMakeFiles/current_chart.dir/depend
