#pragma once

///////////////////////////////////////////////////////////

#include "glad/glad.h"
#include "GLFW/glfw3.h"

class Window;

class Renderer
{
public:
    Renderer() = delete;

    static void Init();
    static void Update();
    static void Terminate();

    static bool IsActive();

    static Window* GetWindow();

private:


};