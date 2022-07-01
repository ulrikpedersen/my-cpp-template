cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set the project name and language
project(
  my-app
  VERSION 0.0.1
  DESCRIPTION ""
  HOMEPAGE_URL "https://my-app.org"
  LANGUAGES CXX C)

set(GIT_SHA
    "Unknown"
    CACHE STRING "SHA this build was generated from")
string(
  SUBSTRING "${GIT_SHA}"
            0
            8
            GIT_SHORT_SHA)

add_subdirectory(src)
add_subdirectory(test)
