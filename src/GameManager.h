#pragma once
#include"Shape.h"

class GameManager {
public:
	GameManager() {
		window = { {Shape(), Shape(), Shape()},
				   {Shape(), Shape(3), Shape()}, 
				   {Shape(), Shape(), Shape()}, 
				   {Shape(), Shape(), Shape()}, };
	}

	void drawWindow();
	void update();
private:
	std::vector<std::vector<Shape>> window;

};
