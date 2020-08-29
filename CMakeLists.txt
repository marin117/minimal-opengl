project(shader_playground)

cmake_minimum_required(VERSION 3.18)

add_definitions(-Wall)
add_definitions(-Wextra)
add_definitions(-pedantic)
add_definitions(-pthread)

set(BINARY_NAME minimal_opengl)

cmake_minimum_required(VERSION 3.18)

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 3.3 REQUIRED)
find_package(glm REQUIRED)

file(GLOB SHADER_FILES  "${PROJECT_SOURCE_DIR}/shaders/*.vs"
                        "${PROJECT_SOURCE_DIR}/shaders/*.fs")

set(SHADERS_FOLDER "${PROJECT_SOURCE_DIR}/shaders" CACHE PATH "shaders location")

configure_file (
                "${PROJECT_SOURCE_DIR}/src/pathconfig.h.in"
                "${PROJECT_BINARY_DIR}/pathconfig.h"
)


set(SHADER_SRC
    src/shader.h
    src/shader.cpp
)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS} ${GLFW_INCLUDE_DIRS})
add_executable(${BINARY_NAME} ${SHADER_SRC} main.cpp)
target_sources(${BINARY_NAME} PRIVATE ${SHADER_FILES} )
set_property(TARGET ${BINARY_NAME} PROPERTY CXX_STANDARD 17)
target_include_directories(${BINARY_NAME} PRIVATE ${PROJECT_BINARY_DIR})
target_link_libraries( ${BINARY_NAME} ${OPENGL_LIBRARIES} ${GLEW_LIBRARIES} ${GLFW_LIBRARIES} ${GLM_LIBRARIES})


