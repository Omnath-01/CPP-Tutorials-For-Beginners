#include <iostream>
using namespace std;

int main()
{
    enum Mile
    {
        Breakfast,
        Lunch,
        Dinner
    };
    Mile m1 = Lunch;
    cout << m1;
    cout << (m1 == 1);

    // cout << Breakfast << endl;
    // cout << Lunch << endl;
    // cout << Dinner << endl;
    return 0;
}