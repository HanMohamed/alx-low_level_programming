# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_SOURCE_DIR = /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/nargs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/nargs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/nargs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nargs.dir/flags.make

CMakeFiles/nargs.dir/1-args.c.o: CMakeFiles/nargs.dir/flags.make
CMakeFiles/nargs.dir/1-args.c.o: /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv/1-args.c
CMakeFiles/nargs.dir/1-args.c.o: CMakeFiles/nargs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/nargs.dir/1-args.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/nargs.dir/1-args.c.o -MF CMakeFiles/nargs.dir/1-args.c.o.d -o CMakeFiles/nargs.dir/1-args.c.o -c /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv/1-args.c

CMakeFiles/nargs.dir/1-args.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nargs.dir/1-args.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv/1-args.c > CMakeFiles/nargs.dir/1-args.c.i

CMakeFiles/nargs.dir/1-args.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nargs.dir/1-args.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv/1-args.c -o CMakeFiles/nargs.dir/1-args.c.s

# Object files for target nargs
nargs_OBJECTS = \
"CMakeFiles/nargs.dir/1-args.c.o"

# External object files for target nargs
nargs_EXTERNAL_OBJECTS =

nargs: CMakeFiles/nargs.dir/1-args.c.o
nargs: CMakeFiles/nargs.dir/build.make
nargs: CMakeFiles/nargs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable nargs"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nargs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nargs.dir/build: nargs
.PHONY : CMakeFiles/nargs.dir/build

CMakeFiles/nargs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nargs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nargs.dir/clean

CMakeFiles/nargs.dir/depend:
	cd /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv/cmake-build-debug /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv/cmake-build-debug /Users/hanosh/Library/CloudStorage/OneDrive-SeattleUniversity/Personal/ALX/alx-low_level_programming/0x0A-argc_argv/cmake-build-debug/CMakeFiles/nargs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nargs.dir/depend

