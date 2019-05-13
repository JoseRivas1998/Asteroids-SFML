#pragma once

#include <SFML/Graphics.hpp>

class LichengineAppListener
{
public:
	virtual void create(sf::RenderWindow *window) = 0;
	virtual void handleInput(sf::RenderWindow *window) = 0;
	virtual void update(sf::RenderWindow *window) = 0;
	virtual void draw(sf::RenderWindow *window) = 0;
	virtual void resize(sf::RenderWindow *window, int width, int height) = 0;
	virtual void dispose(sf::RenderWindow *window) = 0;

};

