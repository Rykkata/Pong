#pragma once
#include "GameObject.h"
class AI :GameObject
{
public:
	AI(EventComponent* eventComponent, GraphicComponent* graphicComponent, PhysicComponent* physicComponent);
	~AI();
	int Update(sf::RenderWindow world);
};

