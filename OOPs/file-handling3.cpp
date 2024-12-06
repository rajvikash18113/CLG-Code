#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int>arr(5);
  cout << "Enter the input" << endl;
  for(int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  ofstream fout;
  fout.open("zero.txt");
  fout << "Original data" << endl;

  for(int i = 0; i < 5; i++)
  {
    fout << arr[i] << " ";
  }
  fout << endl;

    
    sort(arr.begin(), arr.end());
    fout << "Sorted data" << endl;
    for(int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";
    };

  fout.close();
  
}