#pragma once
class GameObject;
class PhysicComponent
{
public:
	PhysicComponent() {};
	~PhysicComponent() {};
	virtual int Update(GameObject* gameObeject) = 0;
};

