#pragma once
#include "GraphicComponent.h"
class PlayerGraphicComponent :
	public GraphicComponent
{
public:
	PlayerGraphicComponent(char* filePath);
	~PlayerGraphicComponent();
};

