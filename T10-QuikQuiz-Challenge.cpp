// multiplication table of 6

#include <iostream>
using namespace std;
int main()
{
    int i;
    // for (i = 1; i <= 10; i++)
    // {
    //     cout << "6 x " << i << " = " << 6 * i << endl;
    // }
    i = 1;
    // while (i <= 10)
    // {
    //     cout << "6 x " << i << " = " << 5 * i << endl;
    //     i++;
    // }

    do
    {
        cout << "6 x " << i << " = " << 4 * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}