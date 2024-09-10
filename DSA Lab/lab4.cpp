/*Write a program to find the location of a given element using Binary Search.*/

#include <iostream>
using namespace std;

int binarySearch(int array[], int low, int high, int x) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (array[mid] == x) {
            return mid; // Element found, return its index
        }

        if (array[mid] < x) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {2, 3, 5, 7, 9, 10}; // Sorted array
    int x = 7; // Element to search
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}
