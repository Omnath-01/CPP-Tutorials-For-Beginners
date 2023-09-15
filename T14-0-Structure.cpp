#include <iostream>

using namespace std;
typedef struct employee
{
    int eID;
    char favChar;
    float salary;
} ep;

int main()
{
    struct employee harry;
    // ep = harry; // same as above line
    struct employee shubham;
    struct employee rohanDas;
    
    harry.eID = 1;
    harry.favChar = 'c';
    harry.salary = 120000;
    cout << "The value is " << harry.eID << endl;
    cout << "The value is " << harry.favChar << endl;
    cout << "The value is " << harry.salary << endl;
    return 0;
}