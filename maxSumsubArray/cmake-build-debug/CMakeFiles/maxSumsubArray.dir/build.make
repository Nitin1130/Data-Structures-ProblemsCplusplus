# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\nitin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.6693.114\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\nitin\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.6693.114\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\C++ codes\maxSumsubArray"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C++ codes\maxSumsubArray\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/maxSumsubArray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/maxSumsubArray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/maxSumsubArray.dir/flags.make

CMakeFiles/maxSumsubArray.dir/main.cpp.obj: CMakeFiles/maxSumsubArray.dir/flags.make
CMakeFiles/maxSumsubArray.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C++ codes\maxSumsubArray\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/maxSumsubArray.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\maxSumsubArray.dir\main.cpp.obj -c "D:\C++ codes\maxSumsubArray\main.cpp"

CMakeFiles/maxSumsubArray.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maxSumsubArray.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\C++ codes\maxSumsubArray\main.cpp" > CMakeFiles\maxSumsubArray.dir\main.cpp.i

CMakeFiles/maxSumsubArray.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maxSumsubArray.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\C++ codes\maxSumsubArray\main.cpp" -o CMakeFiles\maxSumsubArray.dir\main.cpp.s

# Object files for target maxSumsubArray
maxSumsubArray_OBJECTS = \
"CMakeFiles/maxSumsubArray.dir/main.cpp.obj"

# External object files for target maxSumsubArray
maxSumsubArray_EXTERNAL_OBJECTS =

maxSumsubArray.exe: CMakeFiles/maxSumsubArray.dir/main.cpp.obj
maxSumsubArray.exe: CMakeFiles/maxSumsubArray.dir/build.make
maxSumsubArray.exe: CMakeFiles/maxSumsubArray.dir/linklibs.rsp
maxSumsubArray.exe: CMakeFiles/maxSumsubArray.dir/objects1.rsp
maxSumsubArray.exe: CMakeFiles/maxSumsubArray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C++ codes\maxSumsubArray\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable maxSumsubArray.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\maxSumsubArray.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/maxSumsubArray.dir/build: maxSumsubArray.exe

.PHONY : CMakeFiles/maxSumsubArray.dir/build

CMakeFiles/maxSumsubArray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\maxSumsubArray.dir\cmake_clean.cmake
.PHONY : CMakeFiles/maxSumsubArray.dir/clean

CMakeFiles/maxSumsubArray.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C++ codes\maxSumsubArray" "D:\C++ codes\maxSumsubArray" "D:\C++ codes\maxSumsubArray\cmake-build-debug" "D:\C++ codes\maxSumsubArray\cmake-build-debug" "D:\C++ codes\maxSumsubArray\cmake-build-debug\CMakeFiles\maxSumsubArray.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/maxSumsubArray.dir/depend
