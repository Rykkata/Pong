#pragma once
#include "GraphicComponent.h"
class AIGraphicComponent :
	public GraphicComponent
{
public:
	AIGraphicComponent(char* filePath);
	~AIGraphicComponent();
	int Update(GameObject* gameObject, sf::RenderWindow* world);
};

