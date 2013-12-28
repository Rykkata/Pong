#include "PlayerEventComponent.h"
#include "Xbox360.h"
#include "GameObject.h"
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

	if (xb360::LeftThumbDown())
		gameObject->y_veloicity = VELOCITY_DOWN;

	return 0;
}