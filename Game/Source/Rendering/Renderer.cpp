///////////////////////////////////////////////////////////

#include <iostream>

#include "Renderer.h"
#include "Window.h"

Window* RendererWindow;

void Renderer::Init()
{
    /* Initialize the library */
    if (!glfwInit())
        exit(EXIT_FAILURE);

    RendererWindow = new Window();
    RendererWindow->MakeContext();

    /* Load all OpenGL functions using the GLAD loader */
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cerr << "Failed to initialize GLAD" << std::endl;
        exit(EXIT_FAILURE);
    }
}

void Renderer::Update()
{
    /* Render here */
    glClear(GL_COLOR_BUFFER_BIT);

    RendererWindow->Update();

    /* Poll for and process events */
    glfwPollEvents();
}

void Renderer::Terminate()
{
    RendererWindow->Terminate();
    glfwTerminate();
}

bool Renderer::IsActive()
{
    return RendererWindow->IsOpen();
}