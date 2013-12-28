#include "PlayerGraphicComponent.h"
#include "GameObject.h"

PlayerGraphicComponent::PlayerGraphicComponent(GameObject* gameObject, char* filePath) : GraphicComponent(gameObject, filePath)
{
}


PlayerGraphicComponent::~PlayerGraphicComponent()
{
}

int PlayerGraphicComponent::Update(GameObject* gameObject, sf::RenderWindow* world)
{
	m_sprite->setPosition(gameObject->x, gameObject->y);

	world->draw(*m_sprite);
}