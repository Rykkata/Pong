#include "AIGraphicComponent.h"


AIGraphicComponent::AIGraphicComponent(GameObject* gameObject, char* filePath) : GraphicComponent(gameObject, filePath)
{
}


AIGraphicComponent::~AIGraphicComponent()
{
}

int AIGraphicComponent::Update(GameObject* gameObject, sf::RenderWindow* world)
{
	return 0;
}
