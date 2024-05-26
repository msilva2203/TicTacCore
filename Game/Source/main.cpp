#include <iostream>

#include "Core/World.h"
#include "Rendering/Renderer.h"

#include "Objects/GameMaster.h"
#include "Objects/Test.h"

int main(void)
{
    Renderer::Init();

    World MyWorld;
    MyWorld.AddObject(new GameMaster);
    MyWorld.AddObject(new Test);
    MyWorld.Run();

    Renderer::Terminate();
    return 0;
}