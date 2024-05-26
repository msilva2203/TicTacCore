#pragma once

///////////////////////////////////////////////////////////

class World;

class Object
{
public:
    virtual void Begin() = 0;
    virtual void Update(float DeltaTime = 0.0f) = 0;

    World* GetWorld() { return m_World; }

    World* m_World;

private:

};