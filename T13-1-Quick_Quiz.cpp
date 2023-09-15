#include <iostream>
using namespace std;

int main()
{
    int marks[] = {11, 22, 33, 44, 55, 66, 77};
    cout << " using while loop" << endl;
    int i = 0;
    while (i < 7)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
        i++;
    }
    // using do-while loop
    cout << "using do-while loop" << endl;
    i = 0;
    do
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
        i++;
    } while (i < 7);

    return 0;
}