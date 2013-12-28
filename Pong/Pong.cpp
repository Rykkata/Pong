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

#define TICK_RATE 16667

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
	sf::Clock gameClock;
	// Create the game world
	World* newWorld = new World();
	
	// Create the player and set its position
	Player* player = new Player(new PlayerEventComponent(), new PlayerGraphicComponent(PADDLE_PATH), new PlayerPhysicComponent());
	player->x = PLAYER_X;
	player->y = PLAYER_Y;
	player->x_velocity = player->y_veloicity = 0;

	// Create the AI and set its position
	AI* ai = new AI(new AIEventComponent(), new AIGraphicComponent(PADDLE_PATH), new AIPhysicComponent());
	ai->x = AI_X;
	ai->y = AI_Y;
	ai->x_velocity = ai->y_veloicity = 0;

	// Add the objects to the world
	newWorld->AddObject(player);
	newWorld->AddObject(ai);

	// Run the game
	while (newWorld->m_world->isOpen())
	{
		m_timer += gameClock.restart();
		sf::Event event;
		while (newWorld->m_world->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				newWorld->m_world->close();
		}

		// Redraw the screen
		newWorld->m_world->clear();

		if (m_timer.asMicroseconds() >= TICK_RATE)
		{
			m_timer -= sf::microseconds(TICK_RATE);
			newWorld->UpdateObjects();

			if (m_timer.asMicroseconds() / TICK_RATE > 2) // Something happened, reset it 
				m_timer = m_timer.Zero;
		}
		else
		{
			newWorld->DrawObjects();
		}
			
		newWorld->m_world->display();

	}
}
