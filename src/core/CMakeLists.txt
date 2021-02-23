cmake_minimum_required(VERSION 3.15)

project(raydicalCore)

set(RAYDICAL_CORE_SRC
    "ImageBuffer.cpp"
    "ImageBufferWriter.cpp")

add_library(${PROJECT_NAME} 
    ${RAYDICAL_CORE_SRC})

if(BUILD_TESTS)
    add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/test")
endif()