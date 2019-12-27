cmake_minimum_required(VERSION 3.12.4)
project(cpp-playground VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set source file(s).
file(GLOB_RECURSE SOURCES
    "src/*.h"
    "src/*.cpp"
    )

# Specify that this project is an executable.
add_executable(${PROJECT_NAME} ${SOURCES})

# Add install target.
install(
    TARGETS ${PROJECT_NAME}
    DESTINATION bin # Destination is relative to ${CMAKE_INSTALL_PREFIX}.
)

install(FILES ${SOURCES} DESTINATION src)

# Support for CLion install target.
add_custom_target(
    install_${PROJECT_NAME}
    "${CMAKE_COMMAND}" --build "${CMAKE_BINARY_DIR}" --target install
    DEPENDS ${PROJECT_NAME}
    COMMENT "Installing ${PROJECT_NAME}"
)
