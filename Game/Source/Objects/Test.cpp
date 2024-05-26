///////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>

#include "Test.h"

#include "Rendering/Renderer.h"

void Test::Begin()
{
    
}

void Test::Update(float DeltaTime)
{
    Time += DeltaTime;

    float Red = sin(Time * 1.5f);
    float Green = sin(Time * 1.1f);
    float Blue = sin(Time * 0.75f);

    glClearColor(Red, Green, Blue, 1.0f);
}