cmake_minimum_required(VERSION 3.10)
project(ex)

#set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} "-Wall -Wpedantic -Wextra -Werror")
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -coverage -lgcov" )

file(GLOB SOURCES *.c)

add_executable(${PROJECT_NAME} ${SOURCES}) 

add_subdirectory(tests)
