#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 40; i++)
    {
        if (i == 2)
        {
            break;
        }
        cout << i << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 10; i++)
    {
        if (i == 2)
        {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}
