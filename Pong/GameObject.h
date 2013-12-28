#pragma once
#include "EventComponent.h"
#include "GraphicComponent.h"
#include "PhysicComponent.h"

class GameObject
{
public:
	GameObject(EventComponent* eventComponent, GraphicComponent* graphicComponent, PhysicComponent* physicComponent);
	~GameObject();
	virtual int Update(sf::RenderWindow* world);

	int velocity;
	int x, y;
private:
	EventComponent* m_eventComponent;
	GraphicComponent* m_graphicComponent;
	PhysicComponent* m_physicComponent;
};

