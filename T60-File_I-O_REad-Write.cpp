#include <iostream>
#include <string>
#include <fstream>
using namespace std;
/*
The useful classes for working with files in C++
    1.fstreambase
    2.ifstream --> derived from fstreambase
    3.ofstream --> derived from fstreambase
*/
/*
In order to work with files in C++,
you will have to open it. Primarily, there are 2 ways to open a file:
    1.Using the constructor
    2.Using the member function open() of the class
    3.using namespace std;
*/
int main()
{
    string st = "Harry bhau";
    string st2;

    // Opening files using constructor and writing it
    ofstream out("T60-Sample1.txt"); // Write operation
    out << st;

    // Opening files using constructor and reading it
    ifstream in("T60-Sample2.txt"); // Read operation
    in>>st2;
    getline(in, st2);  
    getline(in, st2);  
    cout<<st2;
    return 0;
}