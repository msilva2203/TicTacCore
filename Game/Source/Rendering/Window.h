#pragma once

///////////////////////////////////////////////////////////

#include <string>

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

    void SetTitle(const std::string& NewTitle);

private:
    GLFWwindow* m_Window;

};