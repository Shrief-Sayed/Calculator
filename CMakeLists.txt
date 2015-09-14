

CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12.2)
PROJECT(Calc)


# Add directory for CMake
SET(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)


# Add source files to cmake source tree
SET( SRC_FILES 
	calculator.cpp
	functions.cpp
)

# Add header files to cmake source tree
SET( HDR_FILES 
	calculator.h
	functions.h
)

# Application entry point
SET( ENTRY_FILE main.cpp )


#Create the executable
ADD_EXECUTABLE ( calc ${SRC_FILES} ${HEADER_FILES} ${ENTRY_FILE} ) 
