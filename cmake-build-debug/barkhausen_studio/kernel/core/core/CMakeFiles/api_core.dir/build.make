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

# Include any dependencies generated for this target.
include barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/depend.make

# Include the progress variables for this target.
include barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/progress.make

# Include the compile flags for this target's objects.
include barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/flags.make

barkhausen_studio/kernel/core/core/include/moc_core.cpp: ../barkhausen_studio/kernel/core/core/include/core.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating include/moc_core.cpp"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/include && /usr/lib/qt5/bin/moc @/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/include/moc_core.cpp_parameters

barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.o: barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/flags.make
barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.o: barkhausen_studio/kernel/core/core/api_core_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/api_core_autogen/mocs_compilation.cpp

barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/api_core_autogen/mocs_compilation.cpp > CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.i

barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/api_core_autogen/mocs_compilation.cpp -o CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.s

barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/src/core.cpp.o: barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/flags.make
barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/src/core.cpp.o: ../barkhausen_studio/kernel/core/core/src/core.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/src/core.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/api_core.dir/src/core.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/core/core/src/core.cpp

barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/src/core.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/api_core.dir/src/core.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/core/core/src/core.cpp > CMakeFiles/api_core.dir/src/core.cpp.i

barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/src/core.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/api_core.dir/src/core.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/core/core/src/core.cpp -o CMakeFiles/api_core.dir/src/core.cpp.s

barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/include/moc_core.cpp.o: barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/flags.make
barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/include/moc_core.cpp.o: barkhausen_studio/kernel/core/core/include/moc_core.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/include/moc_core.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/api_core.dir/include/moc_core.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/include/moc_core.cpp

barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/include/moc_core.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/api_core.dir/include/moc_core.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/include/moc_core.cpp > CMakeFiles/api_core.dir/include/moc_core.cpp.i

barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/include/moc_core.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/api_core.dir/include/moc_core.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/include/moc_core.cpp -o CMakeFiles/api_core.dir/include/moc_core.cpp.s

# Object files for target api_core
api_core_OBJECTS = \
"CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/api_core.dir/src/core.cpp.o" \
"CMakeFiles/api_core.dir/include/moc_core.cpp.o"

# External object files for target api_core
api_core_EXTERNAL_OBJECTS =

barkhausen_studio/kernel/core/core/libapi_core.a: barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/api_core_autogen/mocs_compilation.cpp.o
barkhausen_studio/kernel/core/core/libapi_core.a: barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/src/core.cpp.o
barkhausen_studio/kernel/core/core/libapi_core.a: barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/include/moc_core.cpp.o
barkhausen_studio/kernel/core/core/libapi_core.a: barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/build.make
barkhausen_studio/kernel/core/core/libapi_core.a: barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libapi_core.a"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && $(CMAKE_COMMAND) -P CMakeFiles/api_core.dir/cmake_clean_target.cmake
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/api_core.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/build: barkhausen_studio/kernel/core/core/libapi_core.a

.PHONY : barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/build

barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/clean:
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core && $(CMAKE_COMMAND) -P CMakeFiles/api_core.dir/cmake_clean.cmake
.PHONY : barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/clean

barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/depend: barkhausen_studio/kernel/core/core/include/moc_core.cpp
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fkafka/QtProjects/Barkhausen_studio /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/core/core /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : barkhausen_studio/kernel/core/core/CMakeFiles/api_core.dir/depend
