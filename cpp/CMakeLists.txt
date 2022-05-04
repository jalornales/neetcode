cmake_minimum_required(VERSION 3.16)
project(neetcode CXX)

# OPTIONS
option(SANITIZE "Compile with address sanitizer" off)
option(TIDY "Clang-tidy" on)

set(CMAKE_BUILD_TYPE RelWithDebInfo)
set(CMAKE_EXPORT_COMPILE_COMMANDS "ON")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
set(CMAKE_CXX_STANDARD 17)

# For your project build
add_subdirectory(src)

if(SANITIZE)
  message("Sanitizing Address...")
  set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-fno-omit-frame-pointer")
  set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "-fsanitize=address")
endif()

if(TIDY)
  message("Using clang-tidy...")
  set(CMAKE_CXX_CLANG_TIDY clang-tidy -header-filter=.,-checks=-*,readability-*)
endif()
