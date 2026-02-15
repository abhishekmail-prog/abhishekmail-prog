/*
Problem: Find minimum and maximum in an Array
Concept: Arrays
Time Complexity: O(n)
Space Complexity: O(1)
Author: Abhishek
*/

#include <iostream>

void getArray(int arr[], int size);
void printArray(int arr[], int size);
int findMin(int arr[], int size);
int findMax(int arr[], int size);

int main() {

	int size;
	int arr[100], choice;
	int min, max;

	std::cout << "Enter size: ";
	std::cin >> size;

	if(size <= 0 || size > 100) {
		std::cout << "Invalid size\n";
		return 1;
	}

	getArray(arr, size);
	printArray(arr, size);

	std::cout << "1. Find the Minimum.\n";
	std::cout << "2. Find the Maximum.\n";
	std::cout << "Enter your choice: ";
	std::cin >> choice;

	switch(choice) {
		case 1:
			min = findMin(arr, size);
			std::cout << "The minimum is: " << min;
			break;
		case 2:
			max = findMax(arr, size);
			std::cout << "The Maximum element is: " << max;
			break;
		default:
			std::cout << "Invalid optoin.\n";
	}

	return 0;
}


// Input array elements
void getArray(int arr[], int size) {

	for(int i = 0; i < size; i++) {
		std::cout << "arr[" << i << "]: ";
		std::cin >> arr[i];
	}
}

// Print array elements
void printArray(const int arr[], int size) {

	std::cout << "The array: ";

	for(int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

// Find minimum element
int findMin(const int arr[], int size) {

	int min = arr[0];

	for(int i = 1; i < size; i++) {
		if(min > arr[i]) {
			min = arr[i];
		}
	}

	return min;
}

// Find maximum element
int findMax(const int arr[], int size) {

	int max = arr[0];

	for(int i = 1; i < size; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
	}

	return max;
}
