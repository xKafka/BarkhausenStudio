# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/149/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/149/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fkafka/QtProjects/Barkhausen_studio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug

# Include any dependencies generated for this target.
include ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/depend.make

# Include the progress variables for this target.
include ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/progress.make

# Include the compile flags for this target's objects.
include ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/flags.make

ui/MainWindow/menu/measurement_settings/meas_device_settings/include/moc_meas_device_settings.cpp: ../ui/MainWindow/menu/measurement_settings/meas_device_settings/include/meas_device_settings.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating include/moc_meas_device_settings.cpp"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings/include && /usr/lib/qt5/bin/moc @/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings/include/moc_meas_device_settings.cpp_parameters

ui/MainWindow/menu/measurement_settings/meas_device_settings/ui_meas_device_settings.h: ../ui/MainWindow/menu/measurement_settings/meas_device_settings/src/meas_device_settings.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_meas_device_settings.h"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && /usr/lib/qt5/bin/uic -o /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings/ui_meas_device_settings.h /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/menu/measurement_settings/meas_device_settings/src/meas_device_settings.ui

ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.o: ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/flags.make
ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.o: ui/MainWindow/menu/measurement_settings/meas_device_settings/meas_device_settings_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings/meas_device_settings_autogen/mocs_compilation.cpp

ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings/meas_device_settings_autogen/mocs_compilation.cpp > CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.i

ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings/meas_device_settings_autogen/mocs_compilation.cpp -o CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.s

ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.o: ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/flags.make
ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.o: ../ui/MainWindow/menu/measurement_settings/meas_device_settings/src/meas_device_settings.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/menu/measurement_settings/meas_device_settings/src/meas_device_settings.cpp

ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/menu/measurement_settings/meas_device_settings/src/meas_device_settings.cpp > CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.i

ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/menu/measurement_settings/meas_device_settings/src/meas_device_settings.cpp -o CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.s

ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.o: ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/flags.make
ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.o: ui/MainWindow/menu/measurement_settings/meas_device_settings/include/moc_meas_device_settings.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings/include/moc_meas_device_settings.cpp

ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings/include/moc_meas_device_settings.cpp > CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.i

ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings/include/moc_meas_device_settings.cpp -o CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.s

# Object files for target meas_device_settings
meas_device_settings_OBJECTS = \
"CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.o" \
"CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.o"

# External object files for target meas_device_settings
meas_device_settings_EXTERNAL_OBJECTS =

ui/MainWindow/menu/measurement_settings/meas_device_settings/libmeas_device_settings.a: ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/meas_device_settings_autogen/mocs_compilation.cpp.o
ui/MainWindow/menu/measurement_settings/meas_device_settings/libmeas_device_settings.a: ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/src/meas_device_settings.cpp.o
ui/MainWindow/menu/measurement_settings/meas_device_settings/libmeas_device_settings.a: ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/include/moc_meas_device_settings.cpp.o
ui/MainWindow/menu/measurement_settings/meas_device_settings/libmeas_device_settings.a: ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/build.make
ui/MainWindow/menu/measurement_settings/meas_device_settings/libmeas_device_settings.a: ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libmeas_device_settings.a"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && $(CMAKE_COMMAND) -P CMakeFiles/meas_device_settings.dir/cmake_clean_target.cmake
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/meas_device_settings.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/build: ui/MainWindow/menu/measurement_settings/meas_device_settings/libmeas_device_settings.a

.PHONY : ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/build

ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/clean:
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings && $(CMAKE_COMMAND) -P CMakeFiles/meas_device_settings.dir/cmake_clean.cmake
.PHONY : ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/clean

ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/depend: ui/MainWindow/menu/measurement_settings/meas_device_settings/include/moc_meas_device_settings.cpp
ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/depend: ui/MainWindow/menu/measurement_settings/meas_device_settings/ui_meas_device_settings.h
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fkafka/QtProjects/Barkhausen_studio /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/menu/measurement_settings/meas_device_settings /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ui/MainWindow/menu/measurement_settings/meas_device_settings/CMakeFiles/meas_device_settings.dir/depend
