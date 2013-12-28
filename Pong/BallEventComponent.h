#pragma once
#include "EventComponent.h"
class BallEventComponent :
	public EventComponent
{
public:
	BallEventComponent();
	~BallEventComponent();
	virtual int Update(GameObject* gameObeject);
};

