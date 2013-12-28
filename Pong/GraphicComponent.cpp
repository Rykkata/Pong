#include "GraphicComponent.h"
#include "GameObject.h"

GraphicComponent::GraphicComponent(GameObject* gameObject, char* filePath)
{
	// Create the texture
	m_texture = new sf::Texture();

	//Create the sprite
	m_sprite = new sf::Sprite(*m_texture);

	// Set the game objects width and height
	gameObject->width = m_texture->getSize().x;
	gameObject->height = m_texture->getSize().y;
}

GraphicComponent::~GraphicComponent()
{
	delete m_sprite;
	delete m_texture;
}

