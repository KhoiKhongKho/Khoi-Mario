#pragma once
#include <iostream>
#include <string>
#include <raylib.h>

class GameWindow {
private:
	int width;
	int height;
	int targetFPS;
	std::string title;
public:
	//Constructor
	GameWindow();
	GameWindow(int width, int height, int targetFPS, std::string title);

	//Destuctor
	~GameWindow();

	//Getter 
	int getWidth();
	int getHeight();
	int getTargetFPS();
	std::string getTitle();

	//Setter
	void setWidth(int width);
	void setHeight(int height);
	void setTargetFPS(int targetFPS);
	void setTitle(std::string title);

	//Initialize a window
	void init();
};