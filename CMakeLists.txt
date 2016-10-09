CMAKE_MINIMUM_REQUIRED(VERSION 2.6.0)

# The name of your project:
PROJECT(robworkproject)
SET(ROOT ${CMAKE_CURRENT_SOURCE_DIR})

# Locate RobWork libraries.
# This assumes a global environment variable RW_ROOT is set to indicate the RobWork base directory.
SET(RW_ROOT "$ENV{RW_ROOT}" CACHE STRING "RobWork root")
SET(RobWork_DIR ${RW_ROOT}/cmake)
SET(RobWorkStudio_DIR ${RW_ROOT}/../RobWorkStudio/cmake)
SET(RobWorkSim_DIR ${RW_ROOT}/../RobWorkSim/cmake)

# Find required packages:
FIND_PACKAGE(RobWork REQUIRED)
FIND_PACKAGE(RobWorkStudio REQUIRED)
FIND_PACKAGE(RobWorkSim REQUIRED)

SET(CMAKE_BUILD_TYPE Release)

# Directories with includes:
INCLUDE_DIRECTORIES(
  ${ROBWORK_INCLUDE_DIRS}
  ${ROBWORKSTUDIO_INCLUDE_DIRS}
  ${ROBWORKSIM_INCLUDE_DIRS}
	src
)

# Directories with libraries for linking:
LINK_DIRECTORIES(
  ${ROBWORK_LIBRARY_DIRS}
  ${ROBWORKSTUDIO_LIBRARY_DIRS}
  ${ROBWORKSIM_LIBRARY_DIRS}
)

# Set the output directories for generated libraries and binaries:
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${ROOT}/bin" CACHE PATH "Runtime directory" FORCE)
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${ROOT}/libs" CACHE PATH "Library directory" FORCE)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${ROOT}/libs" CACHE PATH "Archive directory" FORCE)

# Set compile/linking definitions:
ADD_DEFINITIONS(-std=c++11 -Wno-deprecated-declarations)

# Add the src directory.
ADD_SUBDIRECTORY(src)
