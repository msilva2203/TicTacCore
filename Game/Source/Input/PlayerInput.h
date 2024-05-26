#pragma once

///////////////////////////////////////////////////////////

#include <iostream>

#include "Core/InputHandler.h"
#include "Core/World.h"
#include "Objects/GameMaster.h"

#include "Rendering/Renderer.h"
#include "Rendering/Window.h"

class PlayerInput : public InputHandler
{
public:
    virtual void OnMouseButtonPress(int Button) override
    {
        auto MyGameMaster = World::Get()->GetObject<GameMaster>();
        MyGameMaster->PrintHello();
    }

    virtual void OnMouseButtonRelease(int Button) override
    {
        
    }

    virtual void OnKeyPress(int Key) override
    {
        if (Key == GLFW_KEY_ESCAPE)
        {
            std::cout << "ESC" << std::endl;
            Renderer::GetWindow()->Close();
        }
    }

    virtual void OnKeyRelease(int Key) override
    {

    }

private:


};