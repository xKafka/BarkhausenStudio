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
include barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/depend.make

# Include the progress variables for this target.
include barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/progress.make

# Include the compile flags for this target's objects.
include barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/flags.make

barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator.cpp: ../barkhausen_studio/kernel/core/core/data_creator/include/data_creator.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating include/moc_data_creator.cpp"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/include && /usr/lib/qt5/bin/moc @/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator.cpp_parameters

barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator_worker.cpp: ../barkhausen_studio/kernel/core/core/data_creator/include/data_creator_worker.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating include/moc_data_creator_worker.cpp"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/include && /usr/lib/qt5/bin/moc @/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator_worker.cpp_parameters

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.o: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/flags.make
barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.o: barkhausen_studio/kernel/core/core/data_creator/data_creator_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/data_creator_autogen/mocs_compilation.cpp

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/data_creator_autogen/mocs_compilation.cpp > CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.i

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/data_creator_autogen/mocs_compilation.cpp -o CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.s

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator.cpp.o: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/flags.make
barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator.cpp.o: ../barkhausen_studio/kernel/core/core/data_creator/src/data_creator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_creator.dir/src/data_creator.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/core/core/data_creator/src/data_creator.cpp

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_creator.dir/src/data_creator.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/core/core/data_creator/src/data_creator.cpp > CMakeFiles/data_creator.dir/src/data_creator.cpp.i

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_creator.dir/src/data_creator.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/core/core/data_creator/src/data_creator.cpp -o CMakeFiles/data_creator.dir/src/data_creator.cpp.s

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.o: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/flags.make
barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.o: ../barkhausen_studio/kernel/core/core/data_creator/src/data_creator_worker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/core/core/data_creator/src/data_creator_worker.cpp

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/core/core/data_creator/src/data_creator_worker.cpp > CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.i

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/core/core/data_creator/src/data_creator_worker.cpp -o CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.s

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.o: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/flags.make
barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.o: barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator.cpp

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator.cpp > CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.i

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator.cpp -o CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.s

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.o: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/flags.make
barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.o: barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator_worker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator_worker.cpp

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator_worker.cpp > CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.i

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator_worker.cpp -o CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.s

# Object files for target data_creator
data_creator_OBJECTS = \
"CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/data_creator.dir/src/data_creator.cpp.o" \
"CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.o" \
"CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.o" \
"CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.o"

# External object files for target data_creator
data_creator_EXTERNAL_OBJECTS =

barkhausen_studio/kernel/core/core/data_creator/libdata_creator.a: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/data_creator_autogen/mocs_compilation.cpp.o
barkhausen_studio/kernel/core/core/data_creator/libdata_creator.a: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator.cpp.o
barkhausen_studio/kernel/core/core/data_creator/libdata_creator.a: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/src/data_creator_worker.cpp.o
barkhausen_studio/kernel/core/core/data_creator/libdata_creator.a: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator.cpp.o
barkhausen_studio/kernel/core/core/data_creator/libdata_creator.a: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/include/moc_data_creator_worker.cpp.o
barkhausen_studio/kernel/core/core/data_creator/libdata_creator.a: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/build.make
barkhausen_studio/kernel/core/core/data_creator/libdata_creator.a: barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library libdata_creator.a"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && $(CMAKE_COMMAND) -P CMakeFiles/data_creator.dir/cmake_clean_target.cmake
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/data_creator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/build: barkhausen_studio/kernel/core/core/data_creator/libdata_creator.a

.PHONY : barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/build

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/clean:
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator && $(CMAKE_COMMAND) -P CMakeFiles/data_creator.dir/cmake_clean.cmake
.PHONY : barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/clean

barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/depend: barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator.cpp
barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/depend: barkhausen_studio/kernel/core/core/data_creator/include/moc_data_creator_worker.cpp
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fkafka/QtProjects/Barkhausen_studio /home/fkafka/QtProjects/Barkhausen_studio/barkhausen_studio/kernel/core/core/data_creator /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : barkhausen_studio/kernel/core/core/data_creator/CMakeFiles/data_creator.dir/depend

