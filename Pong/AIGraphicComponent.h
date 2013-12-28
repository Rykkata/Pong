#pragma once
#include "GraphicComponent.h"
class AIGraphicComponent :
	public GraphicComponent
{
public:
	AIGraphicComponent(char* filePath);
	~AIGraphicComponent();
	virtual int Update(GameObject* gameObject, World* world);
};

