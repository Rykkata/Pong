#include "PlayerPhysicComponent.h"
#include "GameObject.h"

PlayerPhysicComponent::PlayerPhysicComponent()
{
}


PlayerPhysicComponent::~PlayerPhysicComponent()
{
}

int PlayerPhysicComponent::Update(GameObject* gameObject)
{
	gameObject->x += gameObject->x_velocity;
	gameObject->y += gameObject->y_veloicity;

	return 0;
}