#include "ConsoleColor.h"
#include "Parser.h"
#include<iostream>

int main(){
	Color::Modifier red(Color::FG_RED);
	Color::Modifier def(Color::FG_DEFAULT);

	std::cout << red << "   How's it going?" << def << std::endl;	

	std::string escape = "go away";

	while(1){
		std::string message;
		std::getline(std::cin, message);

		if(message == escape)
			break;
		else
			std::cout << red << "   " << message << def << std::endl;
	}
}