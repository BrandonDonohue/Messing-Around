#include<iostream>
#include "Sorting.h"
#include "DStructs.h"

void reset(int input[]) {
	int temp[] = { 3, 4, 7, 5, 8, 1, 0, 9, 2, 6 };
	memcpy(input, temp, sizeof(temp));
}

void print(int input[]) {
	std::cout << "Test Array: " << std::endl;
	for (int index = 0; index < 10; index++) {
		std::cout << input[index] << ", ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void runSorts(Sorting s, int n, int test[]) {
	print(test);
	s.BubbleSort(test, n);
	print(test);
	reset(test);

	print(test);
	s.SelectionSort(test, n);
	print(test);
	reset(test);

	print(test);
	s.InsertionSort(test, n);
	print(test);
	reset(test);

	print(test);
	std::cout << "Quick Sort: " << std::endl;
	s.QuickSort(test, 0, n - 1);
	print(test);
	reset(test);

	print(test);
	std::cout << "Merge Sort: " << std::endl;
	s.MergeSort(test, 0, n - 1);
	print(test);
	reset(test);

	print(test);
	s.ShellSort(test, n);
	print(test);
	reset(test);

	print(test);
	s.HeapSort(test, n);
	print(test);
	reset(test);
}


int main() {
	int test[] = { 3, 4, 7, 5, 8, 1, 0, 9, 2, 6 };
	int n = sizeof(test) / sizeof(test[0]);

	Sorting s;

	runSorts(s, n, test);
}