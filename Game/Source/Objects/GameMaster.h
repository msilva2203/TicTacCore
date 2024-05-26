#pragma once

///////////////////////////////////////////////////////////

#include "Core/Object.h"

class GameMaster : public Object
{
public:
    virtual void Begin() override;
    virtual void Update(float DeltaTime = 0.0f) override;

    void PrintHello();

private:


};