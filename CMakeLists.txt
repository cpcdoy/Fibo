cmake_minimum_required(VERSION 2.8)
project(Fibonacci)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11 -pedantic")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -Werror -O3")

set(CMAKE_AR  "gcc-ar")
set(CMAKE_CXX_ARCHIVE_CREATE "<CMAKE_AR> qcs <TARGET> <LINK_FLAGS> <OBJECTS>")
set(CMAKE_CXX_ARCHIVE_FINISH   true)

include_directories(src/fibo)

add_subdirectory(src/fibo)

set(BIN_NAME fibonacci)
add_executable(${BIN_NAME}
  src/main.cc
  $<TARGET_OBJECTS:fibo>)

add_custom_target(deep_clean
  COMMAND find . -iwholename '*cmake*' -not -name CMakeLists.txt -not -name cmake_deps -not -name '*Find*' -delete
  COMMAND find . -iwholename '*Makefile*' -delete
  COMMAND rm -rf ${BIN_NAME}
)

add_custom_target(doc
  WORKING_DIRECTORY src
  COMMAND doxygen ../Doxyfile
)
