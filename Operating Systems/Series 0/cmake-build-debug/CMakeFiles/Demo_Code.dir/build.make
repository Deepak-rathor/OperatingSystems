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
include CMakeFiles/Demo_Code.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Demo_Code.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Demo_Code.dir/flags.make

CMakeFiles/Demo_Code.dir/someDemoCode.c.obj: CMakeFiles/Demo_Code.dir/flags.make
CMakeFiles/Demo_Code.dir/someDemoCode.c.obj: ../someDemoCode.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Demo_Code.dir/someDemoCode.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Demo_Code.dir\someDemoCode.c.obj   -c "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\someDemoCode.c"

CMakeFiles/Demo_Code.dir/someDemoCode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Demo_Code.dir/someDemoCode.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\someDemoCode.c" > CMakeFiles\Demo_Code.dir\someDemoCode.c.i

CMakeFiles/Demo_Code.dir/someDemoCode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Demo_Code.dir/someDemoCode.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\someDemoCode.c" -o CMakeFiles\Demo_Code.dir\someDemoCode.c.s

CMakeFiles/Demo_Code.dir/someDemoCode.c.obj.requires:

.PHONY : CMakeFiles/Demo_Code.dir/someDemoCode.c.obj.requires

CMakeFiles/Demo_Code.dir/someDemoCode.c.obj.provides: CMakeFiles/Demo_Code.dir/someDemoCode.c.obj.requires
	$(MAKE) -f CMakeFiles\Demo_Code.dir\build.make CMakeFiles/Demo_Code.dir/someDemoCode.c.obj.provides.build
.PHONY : CMakeFiles/Demo_Code.dir/someDemoCode.c.obj.provides

CMakeFiles/Demo_Code.dir/someDemoCode.c.obj.provides.build: CMakeFiles/Demo_Code.dir/someDemoCode.c.obj


# Object files for target Demo_Code
Demo_Code_OBJECTS = \
"CMakeFiles/Demo_Code.dir/someDemoCode.c.obj"

# External object files for target Demo_Code
Demo_Code_EXTERNAL_OBJECTS =

Demo_Code.exe: CMakeFiles/Demo_Code.dir/someDemoCode.c.obj
Demo_Code.exe: CMakeFiles/Demo_Code.dir/build.make
Demo_Code.exe: CMakeFiles/Demo_Code.dir/linklibs.rsp
Demo_Code.exe: CMakeFiles/Demo_Code.dir/objects1.rsp
Demo_Code.exe: CMakeFiles/Demo_Code.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Demo_Code.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Demo_Code.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Demo_Code.dir/build: Demo_Code.exe

.PHONY : CMakeFiles/Demo_Code.dir/build

CMakeFiles/Demo_Code.dir/requires: CMakeFiles/Demo_Code.dir/someDemoCode.c.obj.requires

.PHONY : CMakeFiles/Demo_Code.dir/requires

CMakeFiles/Demo_Code.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Demo_Code.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Demo_Code.dir/clean

CMakeFiles/Demo_Code.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0" "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0" "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\cmake-build-debug" "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\cmake-build-debug" "C:\Users\smoen\Documents\Studium\Informatik\Betriebssysteme\OperatingSystems\Operating Systems\Series 0\cmake-build-debug\CMakeFiles\Demo_Code.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Demo_Code.dir/depend
