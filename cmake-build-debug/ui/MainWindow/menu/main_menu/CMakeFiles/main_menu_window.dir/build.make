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
include ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/depend.make

# Include the progress variables for this target.
include ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/progress.make

# Include the compile flags for this target's objects.
include ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/flags.make

ui/MainWindow/menu/main_menu/include/moc_mainmenuwindow.cpp: ../ui/MainWindow/menu/main_menu/include/mainmenuwindow.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating include/moc_mainmenuwindow.cpp"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu/include && /usr/lib/qt5/bin/moc @/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu/include/moc_mainmenuwindow.cpp_parameters

ui/MainWindow/menu/main_menu/ui_MainMenuWindow.h: ../ui/MainWindow/menu/main_menu/src/MainMenuWindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_MainMenuWindow.h"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && /usr/lib/qt5/bin/uic -o /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu/ui_MainMenuWindow.h /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/menu/main_menu/src/MainMenuWindow.ui

ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.o: ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/flags.make
ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.o: ui/MainWindow/menu/main_menu/main_menu_window_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu/main_menu_window_autogen/mocs_compilation.cpp

ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu/main_menu_window_autogen/mocs_compilation.cpp > CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.i

ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu/main_menu_window_autogen/mocs_compilation.cpp -o CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.s

ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.o: ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/flags.make
ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.o: ../ui/MainWindow/menu/main_menu/src/mainmenuwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/menu/main_menu/src/mainmenuwindow.cpp

ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/menu/main_menu/src/mainmenuwindow.cpp > CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.i

ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/menu/main_menu/src/mainmenuwindow.cpp -o CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.s

ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.o: ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/flags.make
ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.o: ui/MainWindow/menu/main_menu/include/moc_mainmenuwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.o"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.o -c /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu/include/moc_mainmenuwindow.cpp

ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.i"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu/include/moc_mainmenuwindow.cpp > CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.i

ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.s"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu/include/moc_mainmenuwindow.cpp -o CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.s

# Object files for target main_menu_window
main_menu_window_OBJECTS = \
"CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.o" \
"CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.o"

# External object files for target main_menu_window
main_menu_window_EXTERNAL_OBJECTS =

ui/MainWindow/menu/main_menu/libmain_menu_window.a: ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/main_menu_window_autogen/mocs_compilation.cpp.o
ui/MainWindow/menu/main_menu/libmain_menu_window.a: ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/src/mainmenuwindow.cpp.o
ui/MainWindow/menu/main_menu/libmain_menu_window.a: ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/include/moc_mainmenuwindow.cpp.o
ui/MainWindow/menu/main_menu/libmain_menu_window.a: ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/build.make
ui/MainWindow/menu/main_menu/libmain_menu_window.a: ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libmain_menu_window.a"
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && $(CMAKE_COMMAND) -P CMakeFiles/main_menu_window.dir/cmake_clean_target.cmake
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main_menu_window.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/build: ui/MainWindow/menu/main_menu/libmain_menu_window.a

.PHONY : ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/build

ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/clean:
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu && $(CMAKE_COMMAND) -P CMakeFiles/main_menu_window.dir/cmake_clean.cmake
.PHONY : ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/clean

ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/depend: ui/MainWindow/menu/main_menu/include/moc_mainmenuwindow.cpp
ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/depend: ui/MainWindow/menu/main_menu/ui_MainMenuWindow.h
	cd /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fkafka/QtProjects/Barkhausen_studio /home/fkafka/QtProjects/Barkhausen_studio/ui/MainWindow/menu/main_menu /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu /home/fkafka/QtProjects/Barkhausen_studio/cmake-build-debug/ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ui/MainWindow/menu/main_menu/CMakeFiles/main_menu_window.dir/depend
