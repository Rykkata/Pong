#include "World.h"
#include "GameObject.h"
#include "Player.h"
#include "AI.h"
#include <iostream>
World::World() : m_gameObjects()
{
	m_world = new sf::RenderWindow(sf::VideoMode(800, 600), "Pong");
}


World::~World()
{
	m_gameObjects.clear();
	delete m_world;
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

void World::DrawObjects(void)
{
	for (int i = 0; i < m_gameObjects.size(); i++)
		m_gameObjects[i]->Draw(m_world);
}