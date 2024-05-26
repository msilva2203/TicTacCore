#pragma once

///////////////////////////////////////////////////////////

class InputHandler
{
public:
    virtual void OnMouseButtonPress(int Button) = 0;
    virtual void OnMouseButtonRelease(int Button) = 0;

    virtual void OnKeyPress(int Key) = 0;
    virtual void OnKeyRelease(int Key) = 0;

private:


};