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
	int sizeOfLeft = middle - left + 1;
	int sizeOfRight = right - middle;

	std::vector<int> tempL(sizeOfLeft), tempR(sizeOfRight);

	for (int index = 0; index < sizeOfLeft; index++) {
		tempL[index] = input[left + index];
	}

	for (int index = 0; index < sizeOfRight; index++) {
		tempR[index] = input[middle + 1 + index];
	}

	int i = 0;
	int j = 0;
	int k = left;

	while (i < sizeOfLeft && j < sizeOfRight) {
		if (tempL[i] <= tempR[j]) {
			input[k] = tempL[i];
			i++;
		}
		else {
			input[k] = tempR[j];
			j++;
		}

		k++;
	}

	while (i < sizeOfLeft) {
		input[k] = tempL[i];
		i++;
		k++;
	}

	while (j < sizeOfRight) {
		input[k] = tempR[j];
		j++;
		k++;
	}
}



int* Sorting::ShellSort(int input[], int n) {
	std::cout << "Shell Sort:" << std::endl;
	for (int gap = n / 2; gap > 0; gap /= 2) {
		for (int index = gap; index < n; index += 1) {
			int temp = input[index];

			int j;
			for (j = index; j >= gap && input[j - gap] > temp; j -= gap) {
				input[j] = input[j - gap];
			}

			input[j] = temp;
		}
	}
	return input;
}



int* Sorting::HeapSort(int input[], int n) {
	std::cout << "Heap Sort: " << std::endl;
	for (int index = n / 2 - 1; index >= 0; index--) {
		Heapify(input, n, index);
	}

	for (int index = n - 1; index > 0; index--) {
		Swap(&input[0], &input[index]);
		Heapify(input, index, 0);
	}
	return input;
}

void Sorting::Heapify(int input[], int n, int index) {
	int largest = index;
	int left = 2 * index + 1;
	int right = 2 * index + 2;

	if (left < n && input[left] > input[largest])
		largest = left;

	if (right < n && input[right] > input[largest])
		largest = right;

	if (largest != index) {
		Swap(&input[index], &input[largest]);

		Heapify(input, n, largest);
	}
}


