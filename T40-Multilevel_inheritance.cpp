#include <iostream>
using namespace std;
// Student
class Student
{
protected:
    int roll_Number;

public:
    void set_Roll_Number(int);
    void get_Roll_Number(void);
};
void Student::set_Roll_Number(int r)
{
    roll_Number = r;
}
void Student::get_Roll_Number()
{
    cout << "The roll number is " << roll_Number << endl;
}
// Exam
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_Marks(float, float);
    void get_Marks(void);
};
void Exam::set_Marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_Marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

// Result
class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_Roll_Number();
        get_Marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    /*
    Notes:
        If we are inheriting B from A ans C from B:[ A-->B-->C]
        1. A is the base class of B and B is the base class of C
        2. A-->B-->C is called  Inheritance Path
    */
    Result harry;
    harry.set_Roll_Number(420);
    harry.set_Marks(94.0, 90.0);
    harry.display_results();
    return 0;
}
