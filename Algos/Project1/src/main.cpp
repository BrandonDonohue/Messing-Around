#include<iostream>
#include "Sorting.h"
#include "DStructs.h"

void reset(int input[]) {
	int temp[] = { 3, 4, 7, 5, 8, 1, 0, 9, 2, 6 };
	memcpy(input, temp, sizeof(temp));
}

void print(int input[]) {
	for (int index = 0; index < 10; index++) {
		std::cout << input[index] << ", ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

int main() {
	int test[] = { 3, 4, 7, 5, 8, 1, 0, 9, 2, 6 };

	std::cout << "Test Array: " << std::endl;
	print(test);


	Sorting s;
	s.BubbleSort(test);
	print(test);
	reset(test);

	s.SelectionSort(test);
	print(test);
	reset(test);

	s.InsertionSort(test);
	print(test);
	reset(test);


}