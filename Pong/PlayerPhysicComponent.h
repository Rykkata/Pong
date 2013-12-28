#pragma once
#include "PhysicComponent.h"
class PlayerPhysicComponent :
	public PhysicComponent
{
public:
	PlayerPhysicComponent();
	~PlayerPhysicComponent();
	virtual int Update(GameObject* gameObeject, World* world);
};

