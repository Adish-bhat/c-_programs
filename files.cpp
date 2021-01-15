// c++ : file i/o [reading and writing to a file]
// there are 3 classes :
// 1. fstream base
// 2. ifstream -- derived class
// 3. ofstream -- derived class

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // connecting a file with hout stream
    ofstream hout("sample.txt");

    // creaing a string and filling it with the string of the user 
    cout<< "enter the name :";
    string name;
    cin>>name;

    // writing a string to the file
    hout<<name<<" MY name is :";
    hout.close();

    ifstream hin("sample.txt");
    string content;
    hin>>content;
    cout<<"this is the content of this file :"<<content;
    hin.close();
    return 0;
}