#pragma once

///////////////////////////////////////////////////////////

#include "glad/glad.h"
#include "GLFW/glfw3.h"

class Window
{
public:
    Window();

    void Update();
    void Terminate();
    void MakeContext();
    bool IsOpen();

private:
    GLFWwindow* m_Window;

};