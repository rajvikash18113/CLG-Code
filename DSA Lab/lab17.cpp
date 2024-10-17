// AIM: To sort an array of integers in ascending order using insertion sort.

#include<iostream>
using namespace std;

int main() {
    int size, arr[50], i, j, temp; 
    cout << "Enter Array Size: "; 
    cin >> size;
    
    cout << "Enter Array Elements: "; 
    for(i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Sorting array using insertion sort...\n"; 
    for(i = 1; i < size; i++) {
        temp = arr[i]; 
        j = i - 1;
        
        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j]; 
            j--;
        }
        arr[j + 1] = temp;
    }
    
    cout << "Array after sorting: \n"; 
    for(i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
