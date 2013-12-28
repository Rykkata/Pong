#pragma once
#include "EventComponent.h"
class PlayerEventComponent :
	public EventComponent
{
public:
	PlayerEventComponent();
	~PlayerEventComponent();
	int Update(GameObject* gameObeject);
};

