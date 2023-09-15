#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    // Ways to a create a vector
    vector<int> vec1;     // Zero length integer vector
    vector<char> vec2(4); // 4-element charcter vector
    vec2.push_back('5');
    // display(vec1);
    // display(vec2);
    vector<char> vec3(vec2); // 4-element charcter vector from vec2
    display(vec3);
    vector<char> vec4(6, 13); // 6-element charcter vector of 3s
    display(vec4);
    cout << vec4.size();

    int element, size = 5;
    // cout << "Enter the size of your vec : ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to  this vector : ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();

    // vector<int> vec2;
    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter+1, 566);
    // display(vec1);
    return 0;
}