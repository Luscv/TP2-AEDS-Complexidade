# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TP2Aeds.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TP2Aeds.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TP2Aeds.dir/flags.make

CMakeFiles/TP2Aeds.dir/main.c.obj: CMakeFiles/TP2Aeds.dir/flags.make
CMakeFiles/TP2Aeds.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TP2Aeds.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TP2Aeds.dir\main.c.obj   -c C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds\main.c

CMakeFiles/TP2Aeds.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TP2Aeds.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds\main.c > CMakeFiles\TP2Aeds.dir\main.c.i

CMakeFiles/TP2Aeds.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TP2Aeds.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds\main.c -o CMakeFiles\TP2Aeds.dir\main.c.s

# Object files for target TP2Aeds
TP2Aeds_OBJECTS = \
"CMakeFiles/TP2Aeds.dir/main.c.obj"

# External object files for target TP2Aeds
TP2Aeds_EXTERNAL_OBJECTS =

TP2Aeds.exe: CMakeFiles/TP2Aeds.dir/main.c.obj
TP2Aeds.exe: CMakeFiles/TP2Aeds.dir/build.make
TP2Aeds.exe: CMakeFiles/TP2Aeds.dir/linklibs.rsp
TP2Aeds.exe: CMakeFiles/TP2Aeds.dir/objects1.rsp
TP2Aeds.exe: CMakeFiles/TP2Aeds.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TP2Aeds.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TP2Aeds.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TP2Aeds.dir/build: TP2Aeds.exe

.PHONY : CMakeFiles/TP2Aeds.dir/build

CMakeFiles/TP2Aeds.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TP2Aeds.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TP2Aeds.dir/clean

CMakeFiles/TP2Aeds.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds\cmake-build-debug C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds\cmake-build-debug C:\Users\vburi\CLionProjects\TP2-AEDS-Complexidade\TP2Aeds\cmake-build-debug\CMakeFiles\TP2Aeds.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TP2Aeds.dir/depend

