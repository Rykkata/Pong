#include "Player.h"
#include <iostream>

Player::Player(EventComponent* eventComponent, GraphicComponent* graphicComponent, PhysicComponent* physicComponent) : GameObject(eventComponent, graphicComponent, physicComponent)
{
	std::cout << "Player constructor called\n";
}


Player::~Player()
{

}

int Player::Update(World* world)
{
	GameObject::Update(world);

	return 0;
}
