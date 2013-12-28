#include "GameObject.h"


GameObject::GameObject(EventComponent* eventComponent, GraphicComponent* graphicComponent, PhysicComponent* physicComponent)
{
	m_eventComponent = eventComponent;
	m_graphicComponent = graphicComponent;
	m_physicComponent = physicComponent;
}


GameObject::~GameObject()
{
	delete m_eventComponent;
	delete m_graphicComponent;
	delete m_physicComponent;
}

int GameObject::Update(sf::RenderWindow* world)
{
	m_eventComponent->Update(this);
	m_graphicComponent->Update(this, world);
	m_physicComponent->Update(this);
}