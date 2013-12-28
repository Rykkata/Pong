#pragma once
#include "PhysicComponent.h"

class AIPhysicComponent :
	public PhysicComponent
{
public:
	AIPhysicComponent();
	~AIPhysicComponent();
	virtual int Update(GameObject* gameObeject, World* world);
};

