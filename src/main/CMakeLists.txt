cmake_minimum_required(VERSION 3.15)

set(RAYDICAL_MAIN_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp")

add_executable(${PROJECT_NAME} 
    ${RAYDICAL_MAIN_SRC})

#target_link_libraries(${PROJECT_NAME}
#    raydicalCore)