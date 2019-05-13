#pragma once

#include "LichengineAppListener.h";
#include <string>

struct LichengineAppParams {
	int width;
	int height;
	bool fullScreen;
	std::string title;
};

class LichengineApp
{
private:
	LichengineAppListener * appListener;
	LichengineAppParams params;
	sf::RenderWindow window;
public:
	LichengineApp(LichengineAppListener *listener, LichengineAppParams params);
	~LichengineApp();
	void run();
};

