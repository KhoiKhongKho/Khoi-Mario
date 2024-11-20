#include "../include/GameWindow.h"

//Constructor
GameWindow::GameWindow() {
	width = 0;
	height = 0;
	targetFPS = 0;
	title = "Khoi-Mario";
}

GameWindow::GameWindow(int width, int height, int targetFPS, std::string title) 
: width(800), height(450), targetFPS(60), title("Khoi-Mario"){}

//Destuctor
GameWindow::~GameWindow() {
}

//Getter 
int GameWindow::getWidth() {
	return width;
}

int GameWindow::getHeight() {
	return height;
}

int GameWindow::getTargetFPS() {
	return targetFPS;
}

std::string GameWindow::getTitle() {
	return title;
}

//Setter
void GameWindow::setWidth(int width) {
	this->width = width;
}

void GameWindow::setHeight(int height) {
	this->height = height;
}

void GameWindow::setTargetFPS(int targetFPS) {
	this->targetFPS = targetFPS;
}

void GameWindow::setTitle(std::string title) {
	this->title = title;
}

//Initialize a window
void GameWindow::init() {
	InitWindow(width, height, title.c_str());
	SetTargetFPS(targetFPS);

	while (WindowShouldClose() == false) {

	}

	CloseWindow();
}