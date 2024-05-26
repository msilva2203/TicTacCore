#pragma once

///////////////////////////////////////////////////////////

#include <vector>

class Object;

class World
{
public:
    static World* Get();
    static void Create();

    void Run();
    bool AddObject(Object* NewObject);
    
    template <typename T>
    T* GetObject()
    {
        for (auto Obj : m_Objects)
        {
            T* Casted = dynamic_cast<T*>(Obj);
            if (Casted) return Casted;
        }
        return nullptr;
    }

private:
    World() {}
    World(const World&) {}

    std::vector<Object*> m_Objects;

};