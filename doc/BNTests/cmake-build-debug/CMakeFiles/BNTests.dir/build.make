# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BNTests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BNTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BNTests.dir/flags.make

CMakeFiles/BNTests.dir/main.c.obj: CMakeFiles/BNTests.dir/flags.make
CMakeFiles/BNTests.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BNTests.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BNTests.dir\main.c.obj   -c C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests\main.c

CMakeFiles/BNTests.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BNTests.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests\main.c > CMakeFiles\BNTests.dir\main.c.i

CMakeFiles/BNTests.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BNTests.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests\main.c -o CMakeFiles\BNTests.dir\main.c.s

# Object files for target BNTests
BNTests_OBJECTS = \
"CMakeFiles/BNTests.dir/main.c.obj"

# External object files for target BNTests
BNTests_EXTERNAL_OBJECTS =

BNTests.exe: CMakeFiles/BNTests.dir/main.c.obj
BNTests.exe: CMakeFiles/BNTests.dir/build.make
BNTests.exe: CMakeFiles/BNTests.dir/linklibs.rsp
BNTests.exe: CMakeFiles/BNTests.dir/objects1.rsp
BNTests.exe: CMakeFiles/BNTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BNTests.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BNTests.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BNTests.dir/build: BNTests.exe

.PHONY : CMakeFiles/BNTests.dir/build

CMakeFiles/BNTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BNTests.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BNTests.dir/clean

CMakeFiles/BNTests.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests\cmake-build-debug C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests\cmake-build-debug C:\Users\Shanshe.GUNDISHVILI\CLionProjects\BNTests\cmake-build-debug\CMakeFiles\BNTests.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BNTests.dir/depend
