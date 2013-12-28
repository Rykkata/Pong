#include "EventComponent.h"
#include "GraphicComponent.h"
#include "PhysicComponent.h"
#pragma once

class World;
class GameObject
{
public:
	GameObject(EventComponent* eventComponent, GraphicComponent* graphicComponent, PhysicComponent* physicComponent);
	~GameObject();
	virtual int Update(World* world);
	virtual int Draw(World* world);
	int x_velocity, y_veloicity;			// Current Velocity
	float x, y;								// The position of the object
	int width, height;						// The width and heigh of the object
	char* tag;
private:
	EventComponent* m_eventComponent;
	GraphicComponent* m_graphicComponent;
	PhysicComponent* m_physicComponent;
};

