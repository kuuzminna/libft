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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ggrapefr/CLionProjects/libft

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ggrapefr/CLionProjects/libft/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/liba.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/liba.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/liba.dir/flags.make

CMakeFiles/liba.dir/main.c.o: CMakeFiles/liba.dir/flags.make
CMakeFiles/liba.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ggrapefr/CLionProjects/libft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/liba.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/liba.dir/main.c.o -c /Users/ggrapefr/CLionProjects/libft/main.c

CMakeFiles/liba.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/liba.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ggrapefr/CLionProjects/libft/main.c > CMakeFiles/liba.dir/main.c.i

CMakeFiles/liba.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/liba.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ggrapefr/CLionProjects/libft/main.c -o CMakeFiles/liba.dir/main.c.s

# Object files for target liba
liba_OBJECTS = \
"CMakeFiles/liba.dir/main.c.o"

# External object files for target liba
liba_EXTERNAL_OBJECTS =

liba: CMakeFiles/liba.dir/main.c.o
liba: CMakeFiles/liba.dir/build.make
liba: CMakeFiles/liba.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ggrapefr/CLionProjects/libft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable liba"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/liba.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/liba.dir/build: liba

.PHONY : CMakeFiles/liba.dir/build

CMakeFiles/liba.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/liba.dir/cmake_clean.cmake
.PHONY : CMakeFiles/liba.dir/clean

CMakeFiles/liba.dir/depend:
	cd /Users/ggrapefr/CLionProjects/libft/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ggrapefr/CLionProjects/libft /Users/ggrapefr/CLionProjects/libft /Users/ggrapefr/CLionProjects/libft/cmake-build-debug /Users/ggrapefr/CLionProjects/libft/cmake-build-debug /Users/ggrapefr/CLionProjects/libft/cmake-build-debug/CMakeFiles/liba.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/liba.dir/depend
