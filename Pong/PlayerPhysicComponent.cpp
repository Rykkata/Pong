#include "PlayerPhysicComponent.h"
#include "GameObject.h"
#include "World.h"

PlayerPhysicComponent::PlayerPhysicComponent()
{
}


PlayerPhysicComponent::~PlayerPhysicComponent()
{
}

int PlayerPhysicComponent::Update(GameObject* gameObject, World* world)
{
	gameObject->x += gameObject->x_velocity * world->deltaTime.asMicroseconds();
	gameObject->y += gameObject->y_veloicity * world->deltaTime.asMicroseconds();

	return 0;
}