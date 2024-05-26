///////////////////////////////////////////////////////////

#include <iostream>
#include <chrono>

#include "World.h"
#include "Object.h"

#include "Rendering/Renderer.h"

void World::Run()
{
    /* Set clear color to pink */
    glClearColor(1.0f, 0.0f, 1.0f, 1.0f);

    auto LastFrameTime = std::chrono::high_resolution_clock::now();

    while (Renderer::IsActive())
    {
        /* Calculate delta time */
        auto CurrentFrameTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<float> DeltaTime = CurrentFrameTime - LastFrameTime;
        LastFrameTime = CurrentFrameTime;

        /* Update game */
        for (auto Obj : m_Objects)
        {
            Obj->Update(DeltaTime.count());
        }

        /* Update rendering */
        Renderer::Update();
    }
}

bool World::AddObject(Object* NewObject)
{
    for (auto Obj : m_Objects)
    {
        if (Obj == NewObject) return false;
    }
    m_Objects.push_back(NewObject);
    NewObject->m_World = this;
    NewObject->Begin();
    return true;
}