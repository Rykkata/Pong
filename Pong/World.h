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
	void UpdateObjects(void);
	void DrawObjects(void);
	sf::RenderWindow* m_world;
private:

	std::vector<GameObject*> m_gameObjects;
};

