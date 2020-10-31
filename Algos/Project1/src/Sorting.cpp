#include "Sorting.h"

int* Sorting::BubbleSort(int input[], int n) {
	std::cout << "Bubble Sort: " << std::endl;
	int temp;
	for (int index = 0; index < n; index++) {
		for (int sIndex = index + 1; sIndex < n; sIndex++) {
			if (input[index] > input[sIndex]) {
				temp = input[index];
				input[index] = input[sIndex];
				input[sIndex] = temp;
			}
		}
	}
	return input;
}



int* Sorting::SelectionSort(int input[], int n) {
	std::cout << "Selection Sort: " << std::endl;
	for (int index = 0; index < n; index++) {
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



int* Sorting::InsertionSort(int input[], int n) {
	std::cout << "Insertion Sort:" << std::endl;
	int key, j;
	for (int index = 1; index < n; index++) {
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



int* Sorting::QuickSort(int input[], int left, int right) { 
	if (left < right) {
		int part = Partition(input, left, right);

		QuickSort(input, left, part - 1);
		QuickSort(input, part + 1, right);
	}
	return input;
}

int Sorting::Partition(int input[], int left, int right) {
	int pivot = input[right];
	int i = (left - 1);

	for (int j = left; j <= right - 1; j++) {
		if (input[j] < pivot) {
			i++;
			Swap(&input[i], &input[j]);
		}
	}
	Swap(&input[i + 1], &input[right]);
	return (i + 1);
}

void Sorting::Swap(int* left, int* right) {
	int temp = *left;
	*left = *right;
	*right = temp;
}



int* Sorting::MergeSort(int input[], int left, int right) {
	if (left < right) {
		int middle = (left + right) / 2;
		MergeSort(input, left, middle);
		MergeSort(input, middle + 1, right);
		Merge(input, left, middle, right);
	}
	return input;
}

void Sorting::Merge(int input[], int left, int middle, int right){
	
}



int* Sorting::ShellSort(int input[]) {
	std::cout << "Shell Sort:" << std::endl;
	return input;
}

int* Sorting::HeapSort(int input[]) {
	std::cout << "Heap Sort: " << std::endl;
	return input;
}


