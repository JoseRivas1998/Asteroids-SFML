// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LichengineApp.h"
#include "Asteroids.h"

int main()
{
	LichengineAppParams params;
	params.width = 800;
	params.height = 600;
	params.fullScreen = false;
	params.title = "Asteroids";

	LichengineApp app(new Asteroids(), params);

	app.run();

    return 0;
}

