# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/error.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/error.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/error.dir/flags.make

CMakeFiles/error.dir/error.c.obj: CMakeFiles/error.dir/flags.make
CMakeFiles/error.dir/error.c.obj: ../error.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/error.dir/error.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\error.dir\error.c.obj   -c "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\error.c"

CMakeFiles/error.dir/error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/error.dir/error.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\error.c" > CMakeFiles\error.dir\error.c.i

CMakeFiles/error.dir/error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/error.dir/error.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\error.c" -o CMakeFiles\error.dir\error.c.s

CMakeFiles/error.dir/error.c.obj.requires:

.PHONY : CMakeFiles/error.dir/error.c.obj.requires

CMakeFiles/error.dir/error.c.obj.provides: CMakeFiles/error.dir/error.c.obj.requires
	$(MAKE) -f CMakeFiles\error.dir\build.make CMakeFiles/error.dir/error.c.obj.provides.build
.PHONY : CMakeFiles/error.dir/error.c.obj.provides

CMakeFiles/error.dir/error.c.obj.provides.build: CMakeFiles/error.dir/error.c.obj


# Object files for target error
error_OBJECTS = \
"CMakeFiles/error.dir/error.c.obj"

# External object files for target error
error_EXTERNAL_OBJECTS =

error.exe: CMakeFiles/error.dir/error.c.obj
error.exe: CMakeFiles/error.dir/build.make
error.exe: CMakeFiles/error.dir/linklibs.rsp
error.exe: CMakeFiles/error.dir/objects1.rsp
error.exe: CMakeFiles/error.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable error.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\error.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/error.dir/build: error.exe

.PHONY : CMakeFiles/error.dir/build

CMakeFiles/error.dir/requires: CMakeFiles/error.dir/error.c.obj.requires

.PHONY : CMakeFiles/error.dir/requires

CMakeFiles/error.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\error.dir\cmake_clean.cmake
.PHONY : CMakeFiles/error.dir/clean

CMakeFiles/error.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0" "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0" "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\cmake-build-debug" "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\cmake-build-debug" "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\cmake-build-debug\CMakeFiles\error.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/error.dir/depend
