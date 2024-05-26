#include <iostream>

#include "Core/World.h"
#include "Objects/Test.h"
#include "Rendering/Renderer.h"

int main(void)
{
    Renderer::Init();

    World MyWorld;
    MyWorld.AddObject(new Test);
    MyWorld.Run();

    Renderer::Terminate();
    return 0;
}