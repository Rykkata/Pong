#include "PlayerGraphicComponent.h"
#include "GameObject.h"

PlayerGraphicComponent::PlayerGraphicComponent(char* filePath) : GraphicComponent(filePath)
{

}


PlayerGraphicComponent::~PlayerGraphicComponent()
{
}

int PlayerGraphicComponent::Update(GameObject* gameObject, sf::RenderWindow* world)
{
	m_sprite->setPosition(gameObject->x, gameObject->y);

	// Set the game objects width and height
	gameObject->width = m_texture->getSize().x;
	gameObject->height = m_texture->getSize().y;

	world->draw(*m_sprite);

	return 0;
}