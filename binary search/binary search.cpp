#include<iostream>
int binarysearch(int arr[], int size, int target) {
	int low{ 0 };
	int high{ size - 1 };
	while (low <= high) {
		int mid{ (low + high) / 2 };
		if (target ==arr [mid]) {
			return mid;
		}
		else if (target < arr[mid]) {
			high = mid - 1;
		}
		else if (target > arr[mid]) {
			low = mid + 1;
		}
	}
	return -1;
}
int main() {
	int arr[5000];
	for (int i{ 0 }; i <5000 ; i++) {
		arr[i] = i;
	}
	int target{ 767 };
	int size{ 5000 };
	std::cout << binarysearch(arr, size, target);

}