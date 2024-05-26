#pragma once

///////////////////////////////////////////////////////////

class InputHandler
{
public:
    virtual void OnMouseButtonPress(int Button) = 0;
    virtual void OnMouseButtonRelease(int Button) = 0;

private:


};