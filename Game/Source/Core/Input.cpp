///////////////////////////////////////////////////////////

#include "Input.h"

Input& Input::Get()
{
    static Input GameInput;
    return GameInput;
}

void Input::AddInputHandler(InputHandler* NewHandler)
{
    for (auto Handler : m_Handlers)
    {
        if (Handler == NewHandler)
        {
            delete NewHandler;
            return;
        }
    }
    m_Handlers.push_back(NewHandler);
}

void Input::OnMouseButtonPress(int Button)
{
    for (auto Handler : m_Handlers)
    {
        Handler->OnMouseButtonPress(Button);
    }
}

void Input::OnMouseButtonRelease(int Button)
{
    for (auto Handler : m_Handlers)
    {
        Handler->OnMouseButtonRelease(Button);
    }
}

void Input::OnKeyPress(int Key)
{
    for (auto Handler : m_Handlers)
    {
        Handler->OnKeyPress(Key);
    }
}

void Input::OnKeyRelease(int Key)
{
    for (auto Handler : m_Handlers)
    {
        Handler->OnKeyRelease(Key);
    }
}