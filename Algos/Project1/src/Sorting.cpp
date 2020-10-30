#include "Sorting.h"

int* Sorting::BubbleSort(int input[]) {
	std::cout << "Bubble Sort: " << std::endl;
	int temp;
	for (int index = 0; index < 10; index++) {
		for (int sIndex = index + 1; sIndex < 10; sIndex++) {
			if (input[index] > input[sIndex]) {
				temp = input[index];
				input[index] = input[sIndex];
				input[sIndex] = temp;
			}
		}
	}
	return input;
}

int* Sorting::SelectionSort(int input[]) {
	std::cout << "Selection Sort: " << std::endl;
	for (int index = 0; index < 10; index++) {
		findSmallest(input, index);
	}
	return input;
}

void Sorting::findSmallest(int input[], int curPos) {
	for (int index = curPos + 1; index < 10; index++) {
		if (input[curPos] > input[index]) {
			int temp = input[curPos];
			input[curPos] = input[index];
			input[index] = temp;
		}
	}
}

int* Sorting::InsertionSort(int input[]) {
	std::cout << "Insertion Sort:" << std::endl;
	int key, j;
	for (int index = 1; index < 10; index++) {
		key = input[index];
		j = index - 1;
		while (j >= 0 && input[j] > key) {
			input[j + 1] = input[j];
			j = j - 1;
		}
		input[j + 1] = key;
	}
	return input;
}

int* Sorting::QuickSort(int input[]) { 
	std::cout << "Quick Sort: " << std::endl;
	return input;
}

int* Sorting::MergeSort(int input[]) {
	std::cout << "Merge Sort: " << std::endl;
	return input;
}

int* Sorting::ShellSort(int input[]) {
	std::cout << "Shell Sort:" << std::endl;
	return input;
}

int* Sorting::HeapSort(int input[]) {
	std::cout << "Heap Sort: " << std::endl;
	return input;
}


