#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        // a = a;
        this->a = a;     // class variable =object variable then will use 'this'
    }
    // A &setData(int a)
    // {
    //     // a = a;
    //     this->a = a;
    //     return *this;
    // }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    // this is a keyword which is a pointer which points to the object which invoke the member fuction
    A a;
    a.setData(4);
    a.getData();
    return 0;
}
