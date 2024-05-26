///////////////////////////////////////////////////////////

#include "World.h"
#include "Object.h"

#include "Rendering/Renderer.h"

void World::Run()
{
    /* Set clear color to pink */
    glClearColor(1.0f, 0.0f, 1.0f, 1.0f);

    while (Renderer::IsActive())
    {
        /* Update game */
        for (auto Obj : m_Objects)
        {
            Obj->Update();
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
    NewObject->Begin();
    return true;
}