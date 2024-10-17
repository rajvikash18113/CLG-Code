// AIM - Program to sort an array of integers in ascending order using quick sort.

#include <iostream>
#include <vector>
using namespace std;

int partition(int *a, int start, int end) {
    int pivot = a[end];
    int P_index = start; // P_index indicates the pivot value index
    int temp; // Temporary variable

    // Check if array value is less than pivot
    // Place it on the left side by swapping
    for (int i = start; i < end; i++) {
        if (a[i] <= pivot) {
            // Swap a[i] and a[P_index]
            temp = a[i];
            a[i] = a[P_index];
            a[P_index]++;
            a[P_index] = temp;
        }
    }

    // Now exchange the value of pivot and P_index
    temp = a[end];
    a[end] = a[P_index];
    a[P_index] = temp;

    // Return the pivot value index
    return P_index;
}

void Quicksort(int *a, int start, int end) {
    if (start < end) {
        int P_index = partition(a, start, end);
        Quicksort(a, start, P_index - 1);
        Quicksort(a, P_index + 1, end);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n); // Use vector for dynamic array
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Quicksort(a.data(), 0, n - 1); // Use data() to pass array pointer
    cout << "After Quick Sort the array is:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
