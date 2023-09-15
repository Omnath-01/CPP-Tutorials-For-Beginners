#include <iostream>
#include <vector>
using namespace std;


void display(vector<int> &v)
{
    cout << "Displaying this vector";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    
    vector<int> vec1;    
    int element, size;
    cout << "Enter the size of your vec : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to  this vector : ";
        cin >> element;
        vec1.push_back(element);
    }
    vec1.pop_back();
    display(vec1);
    
    return 0;
}