# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fkafka/QtProjects/Barkhausen_studio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fkafka/QtProjects/Barkhausen_studio

# Include any dependencies generated for this target.
include api/exceptions/CMakeFiles/exceptions.dir/depend.make

# Include the progress variables for this target.
include api/exceptions/CMakeFiles/exceptions.dir/progress.make

# Include the compile flags for this target's objects.
include api/exceptions/CMakeFiles/exceptions.dir/flags.make

api/exceptions/CMakeFiles/exceptions.dir/src/exceptions.cpp.o: api/exceptions/CMakeFiles/exceptions.dir/flags.make
api/exceptions/CMakeFiles/exceptions.dir/src/exceptions.cpp.o: api/exceptions/src/exceptions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object api/exceptions/CMakeFiles/exceptions.dir/src/exceptions.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exceptions.dir/src/exceptions.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions/src/exceptions.cpp

api/exceptions/CMakeFiles/exceptions.dir/src/exceptions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exceptions.dir/src/exceptions.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions/src/exceptions.cpp > CMakeFiles/exceptions.dir/src/exceptions.cpp.i

api/exceptions/CMakeFiles/exceptions.dir/src/exceptions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exceptions.dir/src/exceptions.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions/src/exceptions.cpp -o CMakeFiles/exceptions.dir/src/exceptions.cpp.s

# Object files for target exceptions
exceptions_OBJECTS = \
"CMakeFiles/exceptions.dir/src/exceptions.cpp.o"

# External object files for target exceptions
exceptions_EXTERNAL_OBJECTS =

api/exceptions/libexceptions.a: api/exceptions/CMakeFiles/exceptions.dir/src/exceptions.cpp.o
api/exceptions/libexceptions.a: api/exceptions/CMakeFiles/exceptions.dir/build.make
api/exceptions/libexceptions.a: api/exceptions/CMakeFiles/exceptions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libexceptions.a"
	cd /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions && $(CMAKE_COMMAND) -P CMakeFiles/exceptions.dir/cmake_clean_target.cmake
	cd /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exceptions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
api/exceptions/CMakeFiles/exceptions.dir/build: api/exceptions/libexceptions.a

.PHONY : api/exceptions/CMakeFiles/exceptions.dir/build

api/exceptions/CMakeFiles/exceptions.dir/clean:
	cd /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions && $(CMAKE_COMMAND) -P CMakeFiles/exceptions.dir/cmake_clean.cmake
.PHONY : api/exceptions/CMakeFiles/exceptions.dir/clean

api/exceptions/CMakeFiles/exceptions.dir/depend:
	cd /home/fkafka/QtProjects/Barkhausen_studio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fkafka/QtProjects/Barkhausen_studio /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions /home/fkafka/QtProjects/Barkhausen_studio /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions /home/fkafka/QtProjects/Barkhausen_studio/api/exceptions/CMakeFiles/exceptions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : api/exceptions/CMakeFiles/exceptions.dir/depend

