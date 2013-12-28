#include "Pong.h"
#include "World.h"
#include "Player.h"
#include "AI.h"

// Player Components
#include "PlayerEventComponent.h"
#include "PlayerPhysicComponent.h"
#include "PlayerGraphicComponent.h"

// AI Components
#include "AIGraphicComponent.h"
#include "AIPhysicComponent.h"
#include "AIEventComponent.h"

#define PADDLE_PATH "Paddle.png"

#define PLAYER_X 720
#define PLAYER_Y 20

#define AI_X 20
#define AI_Y 20

Pong& Pong::GetInstance(void)
{
	static Pong instance;

	return instance;
}

Pong::~Pong()
{
}

void Pong::RunGame(void)
{
	// Create the game world
	World* newWorld = new World;
	
	// Create the player and set its position
	Player player(new PlayerEventComponent(), new PlayerGraphicComponent("Paddle.png"), new PlayerPhysicComponent());
	player.x = 720;
	player.y = 20;

	// Create the AI and set its position
	AI ai(new AIEventComponent(), new AIGraphicComponent("Paddle.png"), new AIPhysicComponent());
	ai.x = 20;
	ai.y = 20;

	// Add the objects to the world
	newWorld->AddObject(&player);
	newWorld->AddObject(&ai);

	// Run the game
	newWorld->RunGame();
}
