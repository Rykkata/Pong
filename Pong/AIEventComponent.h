#pragma once
#include "EventComponent.h"
class AIEventComponent :
	public EventComponent
{
public:
	AIEventComponent();
	~AIEventComponent();
	int Update(GameObject* gameObeject);
};

