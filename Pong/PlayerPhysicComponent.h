#pragma once
#include "PhysicComponent.h"
class PlayerPhysicComponent :
	public PhysicComponent
{
public:
	PlayerPhysicComponent();
	~PlayerPhysicComponent();
	int Update(GameObject* gameObeject);
};

