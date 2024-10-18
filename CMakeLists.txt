cmake_minimum_required(VERSION 3.10)

# Set the project name
project(FoxPyPro VERSION 1.0 LANGUAGES C)

# Specify the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Include subdirectories
add_subdirectory(src)

# Include directories
# include_directories(${PROJECT_SOURCE_DIR}/include)

# Link libraries (if any)
# target_link_libraries(FoxPyPro <library_name>)