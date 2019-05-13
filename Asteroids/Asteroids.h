#pragma once
#include "LichengineAppListener.h"
class Asteroids :
	public LichengineAppListener
{
public:
	Asteroids();
	void create(sf::RenderWindow *window);
	void handleInput(sf::RenderWindow *window);
	void update(sf::RenderWindow *window);
	void draw(sf::RenderWindow *window);
	void resize(sf::RenderWindow *window, int width, int height);
	void dispose(sf::RenderWindow *window);
	~Asteroids();
};

