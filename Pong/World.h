#pragma once
#include <vector>
#include <SFML\Graphics.hpp>



class GameObject;

class World
{
public:
	World();
	~World();
	void AddObject(GameObject* object);
	void RunGame();
	void UpdateObjects(void);
private:
	sf::RenderWindow* m_world;
	std::vector<GameObject*> m_gameObjects;
};

