#include "Shape.h"

std::vector<std::vector<char>> Shape::getBlocks() {
	return blocks;
}

void Shape::drawShape() {
	for (int outer = 0; outer < blocks.size(); outer++) {
		for (int inner = 0; inner < blocks[outer].size(); inner++) {
			std::cout << blocks[outer][inner] << " ";
		}
		std::cout << std::endl;
	}
}