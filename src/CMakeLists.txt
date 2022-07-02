set(SOURCE_FILES main.cpp)

add_library(sum SHARED sum.cpp)
install(TARGETS sum DESTINATION lib)

add_executable(app ${SOURCE_FILES})
target_link_libraries(app sum)
install(TARGETS app RUNTIME DESTINATION bin)
