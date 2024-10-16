// AIM: Program to sort an array of integers in ascending order using bubble sort

#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {
        // Run loops two times: one for walking through the array
        // and the other for comparison
        int swapped = 0; // Declaring 'swapped' here

        for (int i = 0; i < size - step - 1; ++i)
        {
            // To sort in descending order, change > to < in this line
            if (array[i] > array[i + 1])
            {
                // Swap if the current element is greater than the next
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }

        // If no swapping happened in the inner loop, the array is already sorted
        if (swapped == 0)
            break;
    }
}

// Function to print an array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << " " << array[i];
    }
    cout << "\n";
}

int main()
{
    int data[] = {-2, 45, 0, 11, -9};
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);

    return 0;
}
