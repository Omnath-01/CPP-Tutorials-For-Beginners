#include "iostream"
#include "stdlib.h"
#include "conio.h"
#include "map"
#include "string"
using namespace std;

// Map is an associative array
int main()
{
    system("CLS");

    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;
    marksMap.insert({{"Kozume's", 169.2}, {"kuroo", 187.7}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    return 0;
}