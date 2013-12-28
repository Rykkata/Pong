#include "PlayerEventComponent.h"
#include "Xbox360.h"
#include "GameObject.h"

#define VELOCITY_UP -10
#define VELOCITY_DOWN 10

PlayerEventComponent::PlayerEventComponent()
{
}


PlayerEventComponent::~PlayerEventComponent()
{
}

int PlayerEventComponent::Update(GameObject* gameObject)
{
	if (xb360::LeftThumbUp())
		gameObject->y_veloicity = VELOCITY_UP;
	else if (xb360::LeftThumbDown())
		gameObject->y_veloicity = VELOCITY_DOWN;
	else
		gameObject->y_veloicity = 0;

	return 0;
}