#include "AIGraphicComponent.h"
#include "GameObject.h"

AIGraphicComponent::AIGraphicComponent(char* filePath) : GraphicComponent(filePath)
{
}


AIGraphicComponent::~AIGraphicComponent()
{
}

int AIGraphicComponent::Update(GameObject* gameObject, sf::RenderWindow* world)
{
	m_sprite->setPosition(gameObject->x, gameObject->y);

	// Set the game objects width and height
	gameObject->width = m_texture->getSize().x;
	gameObject->height = m_texture->getSize().y;

	world->draw(*m_sprite);

	return 0;
}
