
/*
For a protected members:
                             Public_Derivation    Private Derivation     Protected Derivation
                            / Public_visibility   / Private Visibility   / Protected visibility

    1. Private members       Not Inherited         Not Inherited          Not Inherited
    2. Protected members     protected             private                protected
    3. Public members        public                public                 protected

*/
#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}
