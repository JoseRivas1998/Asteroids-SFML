#include "stdafx.h"
#include "LichengineApp.h"

LichengineApp::LichengineApp(LichengineAppListener * listener, LichengineAppParams params)
{
	this->appListener = listener;
	this->params = params;
}

LichengineApp::~LichengineApp()
{
	sf::VideoMode vm(params.width, params.height);

	if (params.fullScreen) 
	{
		window.create(vm, params.title, sf::Style::Fullscreen);
	}
	else 
	{
		window.create(vm, params.title);
	}

	this->appListener->create(&window);
	while (window.isOpen()) 
	{

		sf::Event event;
		while (window.pollEvent(event)) 
		{
			if (event.type == sf::Event::Closed) 
			{
				window.close();
			}
		}

		this->appListener->handleInput(&window);
		this->appListener->update(&window);
		this->appListener->draw(&window);
	}

	delete this->appListener;
}

void LichengineApp::run()
{

	this->appListener->dispose(&window);
}
