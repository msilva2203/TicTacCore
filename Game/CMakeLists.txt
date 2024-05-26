cmake_minimum_required(VERSION 3.0.0)
project(TicTacCore VERSION 0.1.0)

include_directories(Source)

set(SRC_CORE Source/Core/*.cpp)

# GLFW
add_subdirectory(../GLFW GLFW)
include_directories(../GLFW/include)

# GLAD
include_directories(../GLAD/include)
set(GLAD_SRC ../GLAD/src/glad.c)

add_executable(TicTacCore Source/main.cpp Source/Rendering/Renderer.cpp Source/Rendering/Window.cpp Source/Core/World.cpp Source/Core/Input.cpp Source/Objects/Test.cpp Source/Objects/GameMaster.cpp ${GLAD_SRC})

target_link_libraries(TicTacCore glfw)