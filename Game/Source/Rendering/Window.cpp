///////////////////////////////////////////////////////////

#include <iostream>

#include "Window.h"
#include "Renderer.h"

Window::Window()
{
    /* Create a windowed mode window and its OpenGL context */
    m_Window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!m_Window)
    {
        Renderer::Terminate();
        exit(EXIT_FAILURE);
    }
}

void Window::Update()
{
    /* Swap front and back buffers */
    glfwSwapBuffers(m_Window);
}

void Window::Terminate()
{
    glfwDestroyWindow(m_Window);
}

void Window::MakeContext()
{
    /* Make the window's context current */
    glfwMakeContextCurrent(m_Window);
}

bool Window::IsOpen()
{
    return !glfwWindowShouldClose(m_Window);
}