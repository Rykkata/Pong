#include "AIGraphicComponent.h"
#include "GameObject.h"
#include "World.h"

AIGraphicComponent::AIGraphicComponent(char* filePath) : GraphicComponent(filePath)
{
}


AIGraphicComponent::~AIGraphicComponent()
{
}

int AIGraphicComponent::Update(GameObject* gameObject, World* world)
{
	m_sprite->setPosition(gameObject->x, gameObject->y);

	world->renderWindow->draw(*m_sprite);

	return 0;
}
