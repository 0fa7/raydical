cmake_minimum_required(VERSION 3.15)

set(RAYDICAL_CORE_TEST_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/ImageBufferTest.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ImageBufferWriterTest.cpp")
    #"${CMAKE_CURRENT_SOURCE_DIR}/Vec3Test.cpp")


foreach(CURRENT_TEST_SRC ${RAYDICAL_CORE_TEST_SRC})
    get_filename_component(CURRENT_TEST_NAME ${CURRENT_TEST_SRC} NAME_WE)
    add_executable(${CURRENT_TEST_NAME} ${CURRENT_TEST_SRC})
    message("file: ${CURRENT_TEST_SRC} test: ${CURRENT_TEST_NAME}")
    add_test(NAME ${CURRENT_TEST_NAME}
        WORKING_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}"
        COMMAND ${CURRENT_TEST_NAME})
endforeach()

target_link_libraries(ImageBufferTest
    ${PROJECT_NAME}
    gtest_main)

target_link_libraries(ImageBufferWriterTest
    ${PROJECT_NAME}
    gtest_main)

#target_link_libraries(Vec3Test
#    ${PROJECT_NAME}
#    gtest_main)

