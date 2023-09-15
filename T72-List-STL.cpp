#include "iostream"
#include "stdlib.h"
#include "conio.h"
#include "list"
using namespace std;

void dipaly(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    system("CLS");
    list<int> list1; // List of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    dipaly(list1);
    // Removing elements from the list
    // list1.pop_front();
    // list1.remove(9);

    // sorting the list
    // list1.sort();
    // dipaly(list1);

    // Revesing the list
    // list1.reverse();
    // dipaly(list1);

    list<int> list2(3); // Empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    dipaly(list2);

    list1.merge(list2);
    cout << "list 1 after merging: ";
    dipaly(list1);

    return 0;
}