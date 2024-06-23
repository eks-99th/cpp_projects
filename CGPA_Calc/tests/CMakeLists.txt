find_library(GTEST_LIB gtest HINTS /usr/local/lib)
find_library(GTEST_MAIN_LIB gtest_main HINTS /usr/local/lib)

if(NOT GTEST_LIB)
  message(FATAL_ERROR "Google Test library not found!")
else()
  message(STATUS "Found Google Test library: ${GTEST_LIB}")
endif()

if(NOT GTEST_MAIN_LIB)
  message(FATAL_ERROR "Google Test main library not found!")
else()
  message(STATUS "Found Google Test main library: ${GTEST_MAIN_LIB}")
endif()

set(TEST_SOURCE_FILES
basic_tests.cpp
)

add_executable(${PROJECT_NAME}_TEST ${TEST_SOURCE_FILES})

target_include_directories(${PROJECT_NAME}_TEST PRIVATE ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME}_TEST ${GTEST_LIB} ${GTEST_MAIN_LIB} pthread course)

add_test(NAME ${PROJECT_NAME}Test COMMAND ${PROJECT_NAME}_TEST)