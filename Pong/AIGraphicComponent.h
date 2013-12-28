#pragma once
#include "GraphicComponent.h"
class AIGraphicComponent :
	public GraphicComponent
{
public:
	AIGraphicComponent(GameObject* gameObject, char* filePath);
	~AIGraphicComponent();
	int Update(GameObject* gameObject, sf::RenderWindow* world);
};

