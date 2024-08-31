#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream fout;
    fout.open("file.txt");
    fout << "Hello Vikash";
    fout.close();
}