#pragma once
#include "GameObject.h"
class AI : public GameObject
{
public:
	AI(EventComponent* eventComponent, GraphicComponent* graphicComponent, PhysicComponent* physicComponent);
	~AI();
	int Update(sf::RenderWindow* world);
};

