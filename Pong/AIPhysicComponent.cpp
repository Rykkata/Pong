#include "AIPhysicComponent.h"
#include "GameObject.h"
#include "World.h"

AIPhysicComponent::AIPhysicComponent()
{
}


AIPhysicComponent::~AIPhysicComponent()
{
}

int AIPhysicComponent::Update(GameObject* gameObject, World* world)
{
	float newX = gameObject->x + gameObject->x_velocity * world->deltaTime.asSeconds();
	float newY = gameObject->y + gameObject->y_velocity * world->deltaTime.asSeconds();

	if (world->CanMoveTo(newX, newY, gameObject->width, gameObject->height))
	{
		gameObject->x = newX;
		gameObject->y = newY;

		gameObject->boundingBox.left = gameObject->x;
		gameObject->boundingBox.top = gameObject->y;
	}

	return 0;
}
