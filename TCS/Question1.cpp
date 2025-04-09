#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> arr)
{
    int n = arr.size();
    // int zero = 0, one = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //         zero++;   // count zero in the array list
    //     else
    //         one++;  // count one in the array list
    // }

    // // fill the array list with 0
    // for (int i = 0; i < zero; i++)
    // {
    //     arr[i] = 0;
    // }

    // // fill the array list with 1
    // for (int i = zero; i < n; i++)
    // {
    //     arr[i] = 1;
    // }


    // Optimal Solution
    int left = 0;
    for(int right = 0; right < n; right++)
    {
        if(arr[right] == 0)
        {
            swap(arr[left], arr[right]);
            left++;
        }
    }

    // print the array list
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// main function
int main()
{
    int n;
    cout << "Enter the size of the array list: ";
    cin >> n;
    cout << "Enter the elements of the array list: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(arr);
    return 0;
}
