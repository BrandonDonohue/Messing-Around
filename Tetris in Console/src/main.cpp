#include<iostream>
#include<chrono>
#include<thread>
#include "GameManager.h"

using namespace std::chrono_literals;

int main() {
	GameManager gm;

	gm.drawWindow();
	//Shape test(3);
	
	//test.drawShape();

	//std::cout << "Testing." << std::endl;

	//Delay
	std::this_thread::sleep_for(10s);

	//This clears the console
	//std::system("cls");


}