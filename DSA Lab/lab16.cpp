// AIM: To sort an array of integers in ascending order using selection sort.

#include<iostream>
using namespace std;

int main() {
    int size, arr[50], i, j, temp, index;

    // Input the size of the array
    cout << "Enter Array Size: ";
    cin >> size;

    // Input array elements
    cout << "Enter Array Elements: ";
    for(i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Selection sort algorithm
    cout << "Sorting array using selection sort...\n"; 
    for(i = 0; i < size - 1; i++) {
        index = i;  // Assume the first element is the smallest
        
        // Find the index of the smallest element in the unsorted part
        for(j = i + 1; j < size; j++) {
            if(arr[j] < arr[index]) {
                index = j;  // Update index of the smallest element
            }
        }
        
        // Swap the found smallest element with the element at index 'i'
        if(index != i) {
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }

    // Output the sorted array
    cout << "Now the Array after sorting is: \n"; 
    for(i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
