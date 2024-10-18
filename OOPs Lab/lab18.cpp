// AIM: WAP TO DEMONSTRATE THE READING AND WRITING OF MIXED TYPE OF DATA.

#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // Writing data to a file
    ofstream outfile("result");
    outfile << "Vikash" << endl;
    outfile << "Marks" << endl;
    outfile << "450" << endl;
    outfile.close();
    
    // Reading data from the file
    ifstream infile("result");
    char name[40], name1[40], name2[40];
    
    infile >> name;
    infile >> name1;
    infile >> name2;
    
    // Displaying the read data
    cout << "Name of the student is: " << name << endl;
    cout << name1 << endl;
    cout << name2 << endl;
    
    infile.close();
    
    return 0;
}
