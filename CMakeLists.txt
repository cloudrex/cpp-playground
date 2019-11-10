cmake_minimum_required(VERSION 3.12.4)
project(playground)
set(CMAKE_CXX_STANDARD 17)

# Configure and use LLVM. Also ensures LLVM 9.0.0 is installed.
find_package(LLVM 9.0.0 EXACT REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Include LLVM source directories (for syntax support, etc.). The SYSTEM symbol supposedly marks the directory to supress warnings.
include_directories(SYSTEM ${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

# Set source file(s).
file(GLOB_RECURSE SOURCES
    "src/*.h"
    "src/*.cpp"
)

# Specify that this project is a library.
add_executable(${PROJECT_NAME} ${SOURCES})

# Provide include directories to be used in the build command. Position in file matters.
#target_include_directories(${PROJECT_NAME} PRIVATE "src")
include_directories("src")

# Link against LLVM libraries.
target_link_libraries(${PROJECT_NAME} ${llvm_libs})
