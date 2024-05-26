#pragma once

///////////////////////////////////////////////////////////

#include <vector>

class Object;

class World
{
public:
    void Run();
    bool AddObject(Object* NewObject);

private:
    std::vector<Object*> m_Objects;

};