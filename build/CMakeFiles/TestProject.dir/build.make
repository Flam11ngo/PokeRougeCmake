# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = D:\VS\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe

# The command to remove a file.
RM = D:\VS\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CMakeProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CMakeProject\build

# Include any dependencies generated for this target.
include CMakeFiles/TestProject.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TestProject.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TestProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestProject.dir/flags.make

CMakeFiles/TestProject.dir/src/main.cpp.obj: CMakeFiles/TestProject.dir/flags.make
CMakeFiles/TestProject.dir/src/main.cpp.obj: CMakeFiles/TestProject.dir/includes_CXX.rsp
CMakeFiles/TestProject.dir/src/main.cpp.obj: E:/CMakeProject/src/main.cpp
CMakeFiles/TestProject.dir/src/main.cpp.obj: CMakeFiles/TestProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\CMakeProject\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestProject.dir/src/main.cpp.obj"
	D:\MINGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TestProject.dir/src/main.cpp.obj -MF CMakeFiles\TestProject.dir\src\main.cpp.obj.d -o CMakeFiles\TestProject.dir\src\main.cpp.obj -c E:\CMakeProject\src\main.cpp

CMakeFiles/TestProject.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TestProject.dir/src/main.cpp.i"
	D:\MINGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\CMakeProject\src\main.cpp > CMakeFiles\TestProject.dir\src\main.cpp.i

CMakeFiles/TestProject.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TestProject.dir/src/main.cpp.s"
	D:\MINGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\CMakeProject\src\main.cpp -o CMakeFiles\TestProject.dir\src\main.cpp.s

CMakeFiles/TestProject.dir/src/Pokemon.cpp.obj: CMakeFiles/TestProject.dir/flags.make
CMakeFiles/TestProject.dir/src/Pokemon.cpp.obj: CMakeFiles/TestProject.dir/includes_CXX.rsp
CMakeFiles/TestProject.dir/src/Pokemon.cpp.obj: E:/CMakeProject/src/Pokemon.cpp
CMakeFiles/TestProject.dir/src/Pokemon.cpp.obj: CMakeFiles/TestProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\CMakeProject\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TestProject.dir/src/Pokemon.cpp.obj"
	D:\MINGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TestProject.dir/src/Pokemon.cpp.obj -MF CMakeFiles\TestProject.dir\src\Pokemon.cpp.obj.d -o CMakeFiles\TestProject.dir\src\Pokemon.cpp.obj -c E:\CMakeProject\src\Pokemon.cpp

CMakeFiles/TestProject.dir/src/Pokemon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TestProject.dir/src/Pokemon.cpp.i"
	D:\MINGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\CMakeProject\src\Pokemon.cpp > CMakeFiles\TestProject.dir\src\Pokemon.cpp.i

CMakeFiles/TestProject.dir/src/Pokemon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TestProject.dir/src/Pokemon.cpp.s"
	D:\MINGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\CMakeProject\src\Pokemon.cpp -o CMakeFiles\TestProject.dir\src\Pokemon.cpp.s

# Object files for target TestProject
TestProject_OBJECTS = \
"CMakeFiles/TestProject.dir/src/main.cpp.obj" \
"CMakeFiles/TestProject.dir/src/Pokemon.cpp.obj"

# External object files for target TestProject
TestProject_EXTERNAL_OBJECTS =

TestProject.exe: CMakeFiles/TestProject.dir/src/main.cpp.obj
TestProject.exe: CMakeFiles/TestProject.dir/src/Pokemon.cpp.obj
TestProject.exe: CMakeFiles/TestProject.dir/build.make
TestProject.exe: E:/CMakeProject/thirdparty/SDL2-2.32.8/x86_64-w64-mingw32/lib/libSDL2.dll.a
TestProject.exe: E:/CMakeProject/thirdparty/SDL2_ttf-2.24.0/x86_64-w64-mingw32/lib/libSDL2_ttf.dll.a
TestProject.exe: E:/CMakeProject/thirdparty/SDL2_mixer-2.8.1/x86_64-w64-mingw32/lib/libSDL2_mixer.dll.a
TestProject.exe: E:/CMakeProject/thirdparty/SDL2_image-2.8.8/x86_64-w64-mingw32/lib/libSDL2_image.dll.a
TestProject.exe: CMakeFiles/TestProject.dir/linkLibs.rsp
TestProject.exe: CMakeFiles/TestProject.dir/objects1.rsp
TestProject.exe: CMakeFiles/TestProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\CMakeProject\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TestProject.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TestProject.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestProject.dir/build: TestProject.exe
.PHONY : CMakeFiles/TestProject.dir/build

CMakeFiles/TestProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TestProject.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TestProject.dir/clean

CMakeFiles/TestProject.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CMakeProject E:\CMakeProject E:\CMakeProject\build E:\CMakeProject\build E:\CMakeProject\build\CMakeFiles\TestProject.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/TestProject.dir/depend

