#pragma once
#include<iostream>

class Sorting {
public:
	int* BubbleSort(int input[]);
	int* SelectionSort(int input[]);
	int* InsertionSort(int input[]);
	int* QuickSort(int input[]);
	int* MergeSort(int input[]);
	int* ShellSort(int input[]);
	int* HeapSort(int input[]);

	void findSmallest(int input[], int currPos);
};