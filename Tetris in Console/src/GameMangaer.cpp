#include"GameManager.h"

void GameManager::drawWindow() {
	for (int outer = 0; outer < window.size(); outer++) {
		for (int inner = 0; inner < window[outer].size(); inner++) {
			window[outer][inner].drawShape();
		}
		//std::cout << std::endl;
	}
}

void GameManager::update() {

}