#pragma once

///////////////////////////////////////////////////////////

#include "glad/glad.h"
#include "GLFW/glfw3.h"

class Renderer
{
public:
    Renderer() = delete;

    static void Init();
    static void Update();
    static void Terminate();

    static bool IsActive();

private:


};