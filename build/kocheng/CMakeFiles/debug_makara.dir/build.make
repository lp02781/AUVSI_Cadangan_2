# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mfikih15/Documents/AUVSI/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mfikih15/Documents/AUVSI/build

# Include any dependencies generated for this target.
include kocheng/CMakeFiles/debug_makara.dir/depend.make

# Include the progress variables for this target.
include kocheng/CMakeFiles/debug_makara.dir/progress.make

# Include the compile flags for this target's objects.
include kocheng/CMakeFiles/debug_makara.dir/flags.make

kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o: kocheng/CMakeFiles/debug_makara.dir/flags.make
kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o: /home/mfikih15/Documents/AUVSI/src/kocheng/src/main/debug_makara.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mfikih15/Documents/AUVSI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o"
	cd /home/mfikih15/Documents/AUVSI/build/kocheng && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o -c /home/mfikih15/Documents/AUVSI/src/kocheng/src/main/debug_makara.cpp

kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.i"
	cd /home/mfikih15/Documents/AUVSI/build/kocheng && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mfikih15/Documents/AUVSI/src/kocheng/src/main/debug_makara.cpp > CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.i

kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.s"
	cd /home/mfikih15/Documents/AUVSI/build/kocheng && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mfikih15/Documents/AUVSI/src/kocheng/src/main/debug_makara.cpp -o CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.s

kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o.requires:

.PHONY : kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o.requires

kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o.provides: kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o.requires
	$(MAKE) -f kocheng/CMakeFiles/debug_makara.dir/build.make kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o.provides.build
.PHONY : kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o.provides

kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o.provides.build: kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o


# Object files for target debug_makara
debug_makara_OBJECTS = \
"CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o"

# External object files for target debug_makara
debug_makara_EXTERNAL_OBJECTS =

/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: kocheng/CMakeFiles/debug_makara.dir/build.make
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/libcv_bridge.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_core3.so.3.3.1
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgproc3.so.3.3.1
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgcodecs3.so.3.3.1
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/libimage_transport.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/libmessage_filters.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/libclass_loader.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/libPocoFoundation.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libdl.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/libroslib.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/librospack.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/libroscpp.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/librosconsole.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/librostime.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /opt/ros/kinetic/lib/libcpp_common.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara: kocheng/CMakeFiles/debug_makara.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mfikih15/Documents/AUVSI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara"
	cd /home/mfikih15/Documents/AUVSI/build/kocheng && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/debug_makara.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
kocheng/CMakeFiles/debug_makara.dir/build: /home/mfikih15/Documents/AUVSI/devel/lib/kocheng/debug_makara

.PHONY : kocheng/CMakeFiles/debug_makara.dir/build

kocheng/CMakeFiles/debug_makara.dir/requires: kocheng/CMakeFiles/debug_makara.dir/src/main/debug_makara.cpp.o.requires

.PHONY : kocheng/CMakeFiles/debug_makara.dir/requires

kocheng/CMakeFiles/debug_makara.dir/clean:
	cd /home/mfikih15/Documents/AUVSI/build/kocheng && $(CMAKE_COMMAND) -P CMakeFiles/debug_makara.dir/cmake_clean.cmake
.PHONY : kocheng/CMakeFiles/debug_makara.dir/clean

kocheng/CMakeFiles/debug_makara.dir/depend:
	cd /home/mfikih15/Documents/AUVSI/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mfikih15/Documents/AUVSI/src /home/mfikih15/Documents/AUVSI/src/kocheng /home/mfikih15/Documents/AUVSI/build /home/mfikih15/Documents/AUVSI/build/kocheng /home/mfikih15/Documents/AUVSI/build/kocheng/CMakeFiles/debug_makara.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : kocheng/CMakeFiles/debug_makara.dir/depend

