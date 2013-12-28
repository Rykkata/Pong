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
	void CollisionDetection(GameObject* object, char* tag);
	GameObject* FindObjectWithTag(char* tag);
	sf::RenderWindow* renderWindow;
	sf::Time deltaTime;
private:

	std::vector<GameObject*> m_gameObjects;
};

