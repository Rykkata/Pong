#pragma once
#include "GameObject.h"

class Player :GameObject
{
public:
	Player(EventComponent* eventComponent, GraphicComponent* graphicComponent, PhysicComponent* physicComponent);
	~Player();
	int Update(sf::RenderWindow* world);
private:
};

