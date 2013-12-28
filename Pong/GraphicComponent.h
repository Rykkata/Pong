#pragma once
#include <SFML/Graphics.hpp>

class GameObject;

class GraphicComponent 
{
public:
	GraphicComponent(char* filePath);
	~GraphicComponent();
	virtual int Update(GameObject* gameObject, sf::RenderWindow* world) = 0;
protected:
	sf::Sprite* m_sprite;
	sf::Texture* m_texture;
};

