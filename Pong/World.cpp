#include "World.h"
#include "GameObject.h"
#include "Player.h"
#include "AI.h"
#include <iostream>
World::World() : m_gameObjects()
{
	renderWindow = new sf::RenderWindow(sf::VideoMode(800, 600), "Pong");
}


World::~World()
{
	m_gameObjects.clear();
	delete renderWindow;
}

void World::AddObject(GameObject* object)
{
	m_gameObjects.push_back(object);
}

void World::UpdateObjects(void)
{
	for (int i = 0; i < m_gameObjects.size(); i++)
		m_gameObjects[i]->Update(this);
}

void World::DrawObjects(void)
{
	for (int i = 0; i < m_gameObjects.size(); i++)
		m_gameObjects[i]->Draw(this);
}