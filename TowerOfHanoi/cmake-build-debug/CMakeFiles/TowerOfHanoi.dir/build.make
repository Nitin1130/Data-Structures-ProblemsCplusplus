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
CMAKE_SOURCE_DIR = "D:\C++ codes\TowerOfHanoi"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C++ codes\TowerOfHanoi\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/TowerOfHanoi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TowerOfHanoi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TowerOfHanoi.dir/flags.make

CMakeFiles/TowerOfHanoi.dir/main.cpp.obj: CMakeFiles/TowerOfHanoi.dir/flags.make
CMakeFiles/TowerOfHanoi.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C++ codes\TowerOfHanoi\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TowerOfHanoi.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TowerOfHanoi.dir\main.cpp.obj -c "D:\C++ codes\TowerOfHanoi\main.cpp"

CMakeFiles/TowerOfHanoi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TowerOfHanoi.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\C++ codes\TowerOfHanoi\main.cpp" > CMakeFiles\TowerOfHanoi.dir\main.cpp.i

CMakeFiles/TowerOfHanoi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TowerOfHanoi.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\C++ codes\TowerOfHanoi\main.cpp" -o CMakeFiles\TowerOfHanoi.dir\main.cpp.s

# Object files for target TowerOfHanoi
TowerOfHanoi_OBJECTS = \
"CMakeFiles/TowerOfHanoi.dir/main.cpp.obj"

# External object files for target TowerOfHanoi
TowerOfHanoi_EXTERNAL_OBJECTS =

TowerOfHanoi.exe: CMakeFiles/TowerOfHanoi.dir/main.cpp.obj
TowerOfHanoi.exe: CMakeFiles/TowerOfHanoi.dir/build.make
TowerOfHanoi.exe: CMakeFiles/TowerOfHanoi.dir/linklibs.rsp
TowerOfHanoi.exe: CMakeFiles/TowerOfHanoi.dir/objects1.rsp
TowerOfHanoi.exe: CMakeFiles/TowerOfHanoi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C++ codes\TowerOfHanoi\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TowerOfHanoi.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TowerOfHanoi.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TowerOfHanoi.dir/build: TowerOfHanoi.exe

.PHONY : CMakeFiles/TowerOfHanoi.dir/build

CMakeFiles/TowerOfHanoi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TowerOfHanoi.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TowerOfHanoi.dir/clean

CMakeFiles/TowerOfHanoi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C++ codes\TowerOfHanoi" "D:\C++ codes\TowerOfHanoi" "D:\C++ codes\TowerOfHanoi\cmake-build-debug" "D:\C++ codes\TowerOfHanoi\cmake-build-debug" "D:\C++ codes\TowerOfHanoi\cmake-build-debug\CMakeFiles\TowerOfHanoi.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TowerOfHanoi.dir/depend
