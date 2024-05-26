#include <iostream>

#include "Core/World.h"
#include "Rendering/Renderer.h"

#include "Objects/GameMaster.h"
#include "Objects/Test.h"

int main(void)
{
    Renderer::Init();

    World::Create();
    World::Get()->AddObject(new GameMaster);
    World::Get()->AddObject(new Test);
    World::Get()->Run();

    Renderer::Terminate();
    return 0;
}