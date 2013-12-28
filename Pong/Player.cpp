#include "Player.h"


Player::Player(EventComponent* eventComponent, GraphicComponent* graphicComponent, PhysicComponent* physicComponent) : GameObject(eventComponent, graphicComponent, physicComponent)
{
}


Player::~Player()
{

}

int Player::Update(sf::RenderWindow* world)
{
	GameObject::Update(world);

	return 0;
}
