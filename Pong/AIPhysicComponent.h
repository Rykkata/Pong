#pragma once
#include "PhysicComponent.h"
class AIPhysicComponent :
	public PhysicComponent
{
public:
	AIPhysicComponent();
	~AIPhysicComponent();
	int Update(GameObject* gameObeject);
};

