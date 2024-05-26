///////////////////////////////////////////////////////////

#include "GameMaster.h"
#include "Core/World.h"
#include "Core/Input.h"
#include "Input/PlayerInput.h"

#include "Rendering/Renderer.h"
#include "Rendering/Window.h"

void GameMaster::Begin()
{
    Renderer::GetWindow()->SetTitle("TIC TAC CORE Dev");

    Input::Get().AddInputHandler(new PlayerInput);
}

void GameMaster::Update(float DeltaTime)
{

}