enable_testing()

add_subdirectory(tests)

add_library(MYPROJECT INTERFACE)
target_include_directories(MYPROJECT INTERFACE ./../../myproject)

find_package(Criterion REQUIRED)
MESSAGE("Criterion Found: ${CRITERION_FOUND}")
MESSAGE("Criterion Include Dir: ${CRITERION_INCLUDE_DIR}")


include_directories(${CRITERION_INCLUDE_DIR})
link_libraries(${CRITERION_LIBRARY})

add_executable(testTest tests/testTest.c)
add_test(NAME testTest COMMAND testTest)
