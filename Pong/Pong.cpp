#include "Pong.h"


Pong& Pong::GetInstance(void)
{
	static Pong instance;

	return instance;
}

Pong::~Pong()
{
}

void Pong::RunGame(void)
{
	// Create the window
	sf::RenderWindow window(sf::VideoMode(200, 200), "Pong");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Redraw the screen
		window.clear();
		window.display();
	}
}
