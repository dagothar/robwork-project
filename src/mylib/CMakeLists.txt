# Add the source files of your library here.
# The SRC_FILES is cached and you can append additional files in subdirectories.
SET(SRC_FILES
	${SRC_FILES}
  ${CMAKE_CURRENT_SOURCE_DIR}/ClassTemplate.cpp
  # ${CMAKE_CURRENT_SOURCE_DIR}/MyClass1.cpp

	CACHE INTERNAL ""
)

# Add your library target here:
ADD_LIBRARY(mylib ${SRC_FILES})
TARGET_LINK_LIBRARIES(mylib $ROBWORK_LIBRARIES $ROBWORKSTUDIO_LIBRARIES $ROBWORKSIM_LIBRARIES)
