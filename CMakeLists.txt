# adding SFML only requires two easy steps!

# cmake version
cmake_minimum_required(VERSION 3.1)

# sets the project name
project(MentalMath VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD_REQUIRED True)

# adds the CarFunctions library
add_subdirectory(HeadersAndSources)

# look for SFML
find_package(SFML REQUIRED COMPONENTS graphics window system)

# configures a header file to pass the version number to the source code
configure_file(MentalMath.h.in MentalMath.h)

# EXTRA_LIBS and EXTRA_INCLUDES are variables
list(APPEND EXTRA_LIBS HeadersAndSources)

# adds an executable
add_executable(MentalMath main.cpp)

# just add graphics window and system
target_link_libraries(MentalMath PUBLIC ${EXTRA_LIBS} sfml-graphics sfml-window sfml-system)

# adds directory to path to search for include files
target_include_directories(MentalMath PUBLIC "${PROJECT_BINARY_DIR}")
