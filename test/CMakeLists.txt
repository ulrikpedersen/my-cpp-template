find_package(Catch2 3)
if (Catch2_FOUND)
  message(STATUS "Catch2 found on system")
else() 
  message(STATUS "Catch2 not found. Fetching from github")
  # Testing library
  FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.0.1)
  FetchContent_MakeAvailable(Catch2)
  # Adds Catch2::Catch2
  list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
endif()

# These tests can use the Catch2-provided main
add_executable(tests tests.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

# These tests need their own main
#add_executable(custom-main-tests tests.cpp test-main.cpp)
#target_link_libraries(custom-main-tests PRIVATE Catch2::Catch2)

include(Catch)
catch_discover_tests(tests)