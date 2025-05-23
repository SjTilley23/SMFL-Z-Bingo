cmake_minimum_required(VERSION 3.28)
project(SFML-Z-BINGO LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS yes)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG master
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

include_directories(hpp)
add_executable(main src/Main.cpp src/Bingo.cpp src/Visuals.cpp src/ButtonHandler.cpp src/FileHandler.cpp)
target_compile_features(main PRIVATE cxx_std_17)
target_link_libraries(main PRIVATE SFML::Graphics)

target_compile_options(main PRIVATE -Wall -Wpedantic -Wextra)
