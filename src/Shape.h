#pragma once
#include<vector>
#include<iostream>

class Shape {
public:
	Shape() {
		blocks = { {'_', '_', '_'},
				   {'_', '_', '_'},
				   {'_', '_', '_'},
				   {'_', '_', '_'}, };
	}

	Shape(int type) {
		switch (type) {
			case 0:
				blocks = { {' ', 'X', ' '},
						   {' ', 'X', ' '},
						   {' ', 'X', ' '},
						   {' ', 'X', ' '}, };
				break;

			case 1:
				blocks = { {' ', ' ', ' '},
						   {' ', ' ', ' '},
						   {' ', 'X', 'X'},
						   {' ', 'X', 'X'}, };
				break;

			case 2:
				blocks = { {' ', ' ', ' '},
						   {' ', 'X', ' '},
						   {' ', 'X', ' '},
						   {' ', 'X', 'X'}, };
				break;

			case 3:
				blocks = { {' ', ' ', ' '},
						   {' ', 'X', ' '},
						   {' ', 'X', ' '},
						   {'X', 'X', ' '}, };
				break;

			case 4:
				blocks = { {' ', ' ', ' '},
						   {' ', ' ', ' '},
						   {'X', 'X', ' '},
						   {' ', 'X', 'X'}, };
				break;

			case 5:
				blocks = { {' ', ' ', ' '},
						   {' ', ' ', ' '},
						   {' ', 'X', 'X'},
						   {'X', 'X', ' '}, };
				break;

			case 6:
				blocks = { {' ', ' ', ' '},
						   {' ', ' ', ' '},
						   {' ', 'X', ' '},
						   {'X', 'X', 'X'}, };
				break;
		}

	}


	void drawShape();
	std::vector<std::vector<char>> getBlocks();

private:
	std::vector<std::vector<char>> blocks;
};
