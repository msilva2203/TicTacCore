#pragma once

///////////////////////////////////////////////////////////

#include <iostream>

#include "Core/InputHandler.h"

class PlayerInput : public InputHandler
{
public:
    virtual void OnMouseButtonPress(int Button) override
    {
        std::cout << "Mouse button pressed!" << std::endl;
    }

    virtual void OnMouseButtonRelease(int Button) override
    {
        std::cout << "Mouse button released!" << std::endl;
    }

private:


};