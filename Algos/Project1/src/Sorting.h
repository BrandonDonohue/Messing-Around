#pragma once
#include<iostream>

class Sorting {
public:
	int* BubbleSort(int input[], int n);
	int* SelectionSort(int input[], int n);
	int* InsertionSort(int input[], int n);
	int* QuickSort(int input[], int left, int right);
	int* MergeSort(int input[], int left, int right);
	int* ShellSort(int input[]);
	int* HeapSort(int input[]);

	void findSmallest(int input[], int currPos);
	void Swap(int* left, int* right);
	int Partition(int input[], int left, int right);
	void Merge(int input[], int left, int middle, int right);
};