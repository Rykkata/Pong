#pragma once
#include <vector>
class GameObject;

class World
{
public:
	World();
	~World();
private:
	std::vector<GameObject*> m_gameObjects;
};

