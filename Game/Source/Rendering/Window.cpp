///////////////////////////////////////////////////////////

#include <iostream>

#include "Core/Input.h"

#include "Window.h"
#include "Renderer.h"

void NativeMouseButtonCallback(GLFWwindow* window, int button, int action, int mods)
{
    switch (action)
    {
    case GLFW_PRESS:
        Input::Get().OnMouseButtonPress(button);
        break;
    case GLFW_RELEASE:
        Input::Get().OnMouseButtonRelease(button);
        break;
    default:
        break;
    }
}

static void NativeKeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    switch (action)
    {
    case GLFW_PRESS:
        Input::Get().OnKeyPress(key);
        break;
    case GLFW_RELEASE:
        Input::Get().OnKeyRelease(key);
        break;
    default:
        break;
    }
}

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

    glfwSetMouseButtonCallback(m_Window, NativeMouseButtonCallback);
    glfwSetKeyCallback(m_Window, NativeKeyCallback);
}

bool Window::IsOpen()
{
    return !glfwWindowShouldClose(m_Window);
}

void Window::Close()
{
    glfwSetWindowShouldClose(m_Window, GLFW_TRUE);
}

void Window::SetTitle(const std::string& NewTitle)
{
    glfwSetWindowTitle(m_Window, NewTitle.c_str());
}