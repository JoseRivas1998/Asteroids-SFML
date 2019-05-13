#include "stdafx.h"
#include "Asteroids.h"


Asteroids::Asteroids()
{
	
}

void Asteroids::create(sf::RenderWindow * window)
{
}


void Asteroids::handleInput(sf::RenderWindow * window)
{
}

void Asteroids::update(sf::RenderWindow * window)
{
}

void Asteroids::draw(sf::RenderWindow * window)
{

	window->clear();

	window->draw(sf::CircleShape(50));

	window->display();

}

void Asteroids::resize(sf::RenderWindow * window, int width, int height)
{
}

void Asteroids::dispose(sf::RenderWindow * window)
{
}

Asteroids::~Asteroids()
{
}
