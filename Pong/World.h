#pragma once
#include <vector>
class GameObject;

class World
{
public:
	World();
	~World();
	void AddObject(GameObject* object);
private:
	std::vector<GameObject*> m_gameObjects;
};

