#include "Shape.h"

std::vector<std::vector<char>> Shape::getBlocks() {
	return blocks;
}

void Shape::drawShape() {
	for (int i = 0; i < blocks.size(); i++) {
		for (int j = 0; j < blocks[i].size(); j++) {
			std::cout << blocks[i][j] << " ";

		}
		std::cout << std::endl;
	}
}