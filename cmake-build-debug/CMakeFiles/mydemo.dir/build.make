# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /Users/xiangwei/CLionProjects/mydemo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/xiangwei/CLionProjects/mydemo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mydemo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mydemo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mydemo.dir/flags.make

CMakeFiles/mydemo.dir/main.cpp.o: CMakeFiles/mydemo.dir/flags.make
CMakeFiles/mydemo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xiangwei/CLionProjects/mydemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mydemo.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mydemo.dir/main.cpp.o -c /Users/xiangwei/CLionProjects/mydemo/main.cpp

CMakeFiles/mydemo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mydemo.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xiangwei/CLionProjects/mydemo/main.cpp > CMakeFiles/mydemo.dir/main.cpp.i

CMakeFiles/mydemo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mydemo.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xiangwei/CLionProjects/mydemo/main.cpp -o CMakeFiles/mydemo.dir/main.cpp.s

CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.o: CMakeFiles/mydemo.dir/flags.make
CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.o: ../list/seq/SeqListDemo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xiangwei/CLionProjects/mydemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.o -c /Users/xiangwei/CLionProjects/mydemo/list/seq/SeqListDemo.cpp

CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xiangwei/CLionProjects/mydemo/list/seq/SeqListDemo.cpp > CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.i

CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xiangwei/CLionProjects/mydemo/list/seq/SeqListDemo.cpp -o CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.s

CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.o: CMakeFiles/mydemo.dir/flags.make
CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.o: ../list/link/LinkListDemo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xiangwei/CLionProjects/mydemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.o -c /Users/xiangwei/CLionProjects/mydemo/list/link/LinkListDemo.cpp

CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xiangwei/CLionProjects/mydemo/list/link/LinkListDemo.cpp > CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.i

CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xiangwei/CLionProjects/mydemo/list/link/LinkListDemo.cpp -o CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.s

CMakeFiles/mydemo.dir/universal/Universal.cpp.o: CMakeFiles/mydemo.dir/flags.make
CMakeFiles/mydemo.dir/universal/Universal.cpp.o: ../universal/Universal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xiangwei/CLionProjects/mydemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/mydemo.dir/universal/Universal.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mydemo.dir/universal/Universal.cpp.o -c /Users/xiangwei/CLionProjects/mydemo/universal/Universal.cpp

CMakeFiles/mydemo.dir/universal/Universal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mydemo.dir/universal/Universal.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xiangwei/CLionProjects/mydemo/universal/Universal.cpp > CMakeFiles/mydemo.dir/universal/Universal.cpp.i

CMakeFiles/mydemo.dir/universal/Universal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mydemo.dir/universal/Universal.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xiangwei/CLionProjects/mydemo/universal/Universal.cpp -o CMakeFiles/mydemo.dir/universal/Universal.cpp.s

CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.o: CMakeFiles/mydemo.dir/flags.make
CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.o: ../stack/SqStackDemo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xiangwei/CLionProjects/mydemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.o -c /Users/xiangwei/CLionProjects/mydemo/stack/SqStackDemo.cpp

CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xiangwei/CLionProjects/mydemo/stack/SqStackDemo.cpp > CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.i

CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xiangwei/CLionProjects/mydemo/stack/SqStackDemo.cpp -o CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.s

CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.o: CMakeFiles/mydemo.dir/flags.make
CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.o: ../stack/LinkStackDemo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xiangwei/CLionProjects/mydemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.o -c /Users/xiangwei/CLionProjects/mydemo/stack/LinkStackDemo.cpp

CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xiangwei/CLionProjects/mydemo/stack/LinkStackDemo.cpp > CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.i

CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xiangwei/CLionProjects/mydemo/stack/LinkStackDemo.cpp -o CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.s

# Object files for target mydemo
mydemo_OBJECTS = \
"CMakeFiles/mydemo.dir/main.cpp.o" \
"CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.o" \
"CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.o" \
"CMakeFiles/mydemo.dir/universal/Universal.cpp.o" \
"CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.o" \
"CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.o"

# External object files for target mydemo
mydemo_EXTERNAL_OBJECTS =

mydemo: CMakeFiles/mydemo.dir/main.cpp.o
mydemo: CMakeFiles/mydemo.dir/list/seq/SeqListDemo.cpp.o
mydemo: CMakeFiles/mydemo.dir/list/link/LinkListDemo.cpp.o
mydemo: CMakeFiles/mydemo.dir/universal/Universal.cpp.o
mydemo: CMakeFiles/mydemo.dir/stack/SqStackDemo.cpp.o
mydemo: CMakeFiles/mydemo.dir/stack/LinkStackDemo.cpp.o
mydemo: CMakeFiles/mydemo.dir/build.make
mydemo: CMakeFiles/mydemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/xiangwei/CLionProjects/mydemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable mydemo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mydemo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mydemo.dir/build: mydemo

.PHONY : CMakeFiles/mydemo.dir/build

CMakeFiles/mydemo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mydemo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mydemo.dir/clean

CMakeFiles/mydemo.dir/depend:
	cd /Users/xiangwei/CLionProjects/mydemo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xiangwei/CLionProjects/mydemo /Users/xiangwei/CLionProjects/mydemo /Users/xiangwei/CLionProjects/mydemo/cmake-build-debug /Users/xiangwei/CLionProjects/mydemo/cmake-build-debug /Users/xiangwei/CLionProjects/mydemo/cmake-build-debug/CMakeFiles/mydemo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mydemo.dir/depend

