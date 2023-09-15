/*
Templates

class -----> object
Template -----> class
    |
(Parameterialized classes)
why are templates?
->dry
->generic programming


class vector{
    int *arr;
    int size;
    public:
        vecInt, vecFloat, vecDouble, vecChar
}
*/

/*
Syntax for Template:

template <class T>
class vector{
    T* arr;
    public:
        vector(T* arr)[
            //code
        ]
        //and many other methods 

}

T can be int ,float, ............etc

int main() {
    vector<int> myVec1(ptr);
    vector<float> myVec2(ptr);
    return 0;
}


*/