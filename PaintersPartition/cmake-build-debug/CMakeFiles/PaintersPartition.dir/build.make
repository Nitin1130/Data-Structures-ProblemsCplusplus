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
CMAKE_SOURCE_DIR = "D:\C++ codes\PaintersPartition"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C++ codes\PaintersPartition\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/PaintersPartition.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PaintersPartition.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PaintersPartition.dir/flags.make

CMakeFiles/PaintersPartition.dir/main.cpp.obj: CMakeFiles/PaintersPartition.dir/flags.make
CMakeFiles/PaintersPartition.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C++ codes\PaintersPartition\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PaintersPartition.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PaintersPartition.dir\main.cpp.obj -c "D:\C++ codes\PaintersPartition\main.cpp"

CMakeFiles/PaintersPartition.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PaintersPartition.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\C++ codes\PaintersPartition\main.cpp" > CMakeFiles\PaintersPartition.dir\main.cpp.i

CMakeFiles/PaintersPartition.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PaintersPartition.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\C++ codes\PaintersPartition\main.cpp" -o CMakeFiles\PaintersPartition.dir\main.cpp.s

# Object files for target PaintersPartition
PaintersPartition_OBJECTS = \
"CMakeFiles/PaintersPartition.dir/main.cpp.obj"

# External object files for target PaintersPartition
PaintersPartition_EXTERNAL_OBJECTS =

PaintersPartition.exe: CMakeFiles/PaintersPartition.dir/main.cpp.obj
PaintersPartition.exe: CMakeFiles/PaintersPartition.dir/build.make
PaintersPartition.exe: CMakeFiles/PaintersPartition.dir/linklibs.rsp
PaintersPartition.exe: CMakeFiles/PaintersPartition.dir/objects1.rsp
PaintersPartition.exe: CMakeFiles/PaintersPartition.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C++ codes\PaintersPartition\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PaintersPartition.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PaintersPartition.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PaintersPartition.dir/build: PaintersPartition.exe

.PHONY : CMakeFiles/PaintersPartition.dir/build

CMakeFiles/PaintersPartition.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PaintersPartition.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PaintersPartition.dir/clean

CMakeFiles/PaintersPartition.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C++ codes\PaintersPartition" "D:\C++ codes\PaintersPartition" "D:\C++ codes\PaintersPartition\cmake-build-debug" "D:\C++ codes\PaintersPartition\cmake-build-debug" "D:\C++ codes\PaintersPartition\cmake-build-debug\CMakeFiles\PaintersPartition.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/PaintersPartition.dir/depend
