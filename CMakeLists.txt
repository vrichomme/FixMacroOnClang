# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)

set(COMPONENT_NAME FixMacroOnClang)
project(${COMPONENT_NAME})

file(GLOB INCLUDE_FILES *.h)						
file(GLOB SRC_FILES *.cpp)

source_group("include" FILES ${INCLUDE_FILES})
source_group("src" FILES ${SRC_FILES})

add_executable(${COMPONENT_NAME} WIN32
   ${INCLUDE_FILES}
   ${SRC_FILES}
)

set_target_properties(${COMPONENT_NAME}
	PROPERTIES OUTPUT_NAME ${COMPONENT_NAME}
)

# we want a console application
if (WIN32)
	set_target_properties(${PROJECT_NAME} 
	PROPERTIES LINK_FLAGS /SUBSYSTEM:CONSOLE
)
endif (WIN32)
