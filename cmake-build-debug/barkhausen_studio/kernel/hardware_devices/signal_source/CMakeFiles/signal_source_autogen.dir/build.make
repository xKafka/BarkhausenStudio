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
CMAKE_COMMAND = /snap/clion/151/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/151/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fkafka/QtProjects/Barkhausen_studio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug

# Utility rule file for signal_source_autogen.

# Include the progress variables for this target.
include barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen.dir/progress.make

barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target signal_source"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/hardware_devices/signal_source && /snap/clion/151/bin/cmake/linux/bin/cmake -E cmake_autogen /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen.dir/AutogenInfo.json Debug

signal_source_autogen: barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen
signal_source_autogen: barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen.dir/build.make

.PHONY : signal_source_autogen

# Rule to build all files generated by this target.
barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen.dir/build: signal_source_autogen

.PHONY : barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen.dir/build

barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen.dir/clean:
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/hardware_devices/signal_source && $(CMAKE_COMMAND) -P CMakeFiles/signal_source_autogen.dir/cmake_clean.cmake
.PHONY : barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen.dir/clean

barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen.dir/depend:
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fkafka/QtProjects/Barkhausen_studio /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/hardware_devices/signal_source /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/hardware_devices/signal_source /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : barkhausen_studio/kernel/hardware_devices/signal_source/CMakeFiles/signal_source_autogen.dir/depend

