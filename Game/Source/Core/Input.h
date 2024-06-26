#pragma once

///////////////////////////////////////////////////////////

#include <vector>

#include "InputHandler.h"

class Input
{
public:
    static Input& Get();

    void AddInputHandler(InputHandler* NewHandler);

    void OnMouseButtonPress(int Button);
    void OnMouseButtonRelease(int Button);
    void OnKeyPress(int Key);
    void OnKeyRelease(int Key);

private:
    Input() {};
    Input(const Input&) {};

    std::vector<InputHandler*> m_Handlers;
};