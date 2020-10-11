#pragma once
#include<vector>
#include<iostream>

class Shape {
public:

private:
	std::vector<std::vector<char>> blocks;
	enum layouts {
		straight,
		box,
		L,
		backL,
		Z,
		backZ,
		hat
	};
};

std::ostream& operator<<(std::ostream& os, Shape& S);
