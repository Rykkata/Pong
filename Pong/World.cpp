#include "World.h"
#include "GameObject.h"
#include "Player.h"
#include "AI.h"

World::World()
{
	m_world = new sf::RenderWindow(sf::VideoMode(800, 600), "Pong");
}


World::~World()
{
	m_gameObjects.clear();
	delete m_world;
}

void World::RunGame()
{
	while (m_world->isOpen())
	{
		m_world->clear();
		sf::Event event;
		while (m_world->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				m_world->close();
		}

		// Redraw the screen
		UpdateObjects();

		m_world->display();
		
	}
}

void World::AddObject(GameObject* object)
{
	m_gameObjects.push_back(object);
}

void World::UpdateObjects(void)
{
	for (int i = 0; i < m_gameObjects.size(); i++)
		m_gameObjects[i]->Update(m_world);
}