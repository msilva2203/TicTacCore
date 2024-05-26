#pragma once

///////////////////////////////////////////////////////////

class Object
{
public:
    virtual void Begin() = 0;
    virtual void Update(float DeltaTime = 0.0f) = 0;

private:


};