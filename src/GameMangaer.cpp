#include"GameManager.h"

void GameManager::drawWindow() {
	for (int i = 0; i < window.size(); i++) {
		for (int j = 0; j < window[i].size(); j++) {
			window[i][j].drawShape();

		}
		std::cout << std::endl;
	}
}

void GameManager::update() {

}