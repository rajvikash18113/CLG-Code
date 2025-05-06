// AIM - Write a program to find the location of a given element using Linear Search 

#include <iostream>
using namespace std;

int linearSearch(int array[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            return i; // Return the index if element is found
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int arr[] = {2, 3, 5, 7, 9, 10}; // Array of elements
    int x = 7; // Element to search
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, x);

    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}
//