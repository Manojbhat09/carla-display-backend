cmake_minimum_required(VERSION 3.5.1)

include("CMakeLists.txt.in")

set(libcarla_source_path "${CMAKE_CURRENT_SOURCE_DIR}/../source")
set(libcarla_source_thirdparty_path "${libcarla_source_path}/third-party")

include_directories(${CLIENT_ROOT_FOLDER}/include/lib)
include_directories(${CLIENT_ROOT_FOLDER}/include/lib/third-party)

if (CARLA_VERSION)
  configure_file(${libcarla_source_path}/carla/Version.h.in ${CLIENT_ROOT_FOLDER}/include/carla/Version.h)
endif()

add_subdirectory("client")

# GTest is not compiled on Windows.
# if ((LIBCARLA_BUILD_TEST) AND (NOT WIN32))
#  add_subdirectory("test")
# endif()
