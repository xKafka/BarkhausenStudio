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
CMAKE_BINARY_DIR = /home/fkafka/QtProjects/Barkhausen_studio

# Utility rule file for main_window_autogen.

# Include the progress variables for this target.
include ui/MainWindow/CMakeFiles/main_window_autogen.dir/progress.make

ui/MainWindow/CMakeFiles/main_window_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target main_window"
	cd /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow && /snap/clion/145/bin/cmake/linux/bin/cmake -E cmake_autogen /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/CMakeFiles/main_window_autogen.dir/AutogenInfo.json Debug

main_window_autogen: ui/MainWindow/CMakeFiles/main_window_autogen
main_window_autogen: ui/MainWindow/CMakeFiles/main_window_autogen.dir/build.make

.PHONY : main_window_autogen

# Rule to build all files generated by this target.
ui/MainWindow/CMakeFiles/main_window_autogen.dir/build: main_window_autogen

.PHONY : ui/MainWindow/CMakeFiles/main_window_autogen.dir/build

ui/MainWindow/CMakeFiles/main_window_autogen.dir/clean:
	cd /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow && $(CMAKE_COMMAND) -P CMakeFiles/main_window_autogen.dir/cmake_clean.cmake
.PHONY : ui/MainWindow/CMakeFiles/main_window_autogen.dir/clean

ui/MainWindow/CMakeFiles/main_window_autogen.dir/depend:
	cd /home/fkafka/QtProjects/Barkhausen_studio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fkafka/QtProjects/Barkhausen_studio /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow /home/fkafka/QtProjects/Barkhausen_studio /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/CMakeFiles/main_window_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ui/MainWindow/CMakeFiles/main_window_autogen.dir/depend
