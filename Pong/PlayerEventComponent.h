#pragma once
#include "EventComponent.h"

#define VELOCITY_UP 10
#define VELOCITY_DOWN 10

class PlayerEventComponent :
	public EventComponent
{
public:
	PlayerEventComponent();
	~PlayerEventComponent();
	int Update(GameObject* gameObeject);
};

