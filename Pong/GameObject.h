#include "EventComponent.h"
#include "GraphicComponent.h"
#include "PhysicComponent.h"


#pragma once

class GameObject
{
public:
	GameObject(EventComponent* eventComponent, GraphicComponent* graphicComponent, PhysicComponent* physicComponent);
	~GameObject();
	virtual int Update(sf::RenderWindow* world);

	int x_velocity, y_veloicity;			// Current Velocity
	float x, y;								// The position of the object
	int width, height;						// The width and heigh of the object
private:
	EventComponent* m_eventComponent;
	GraphicComponent* m_graphicComponent;
	PhysicComponent* m_physicComponent;
};

