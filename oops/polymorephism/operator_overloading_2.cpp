#include <iostream>
#include <string>
using namespace std;

class User
{
public:
    int age, marks;

    User(int age, int marks)
    {
        this->age = age;
        this->marks = marks;
    }
    // void operator +(const User &u)
    // {
    //     cout<<"\n + operator overloading..";
    //     cout<<"\nValue of age = "<<age<<endl;
    //     cout<<"\nValue of marks = "<<marks<<endl;

    //     cout<<"\nValue of age using object"<<u.age<<endl;
    //     cout<<"Value of marks using object"<<u.marks;
    // }

    User operator+(const User &u)
    {
        cout << "\n + operator overloading..";
        cout << "\nValue of age = " << age << endl;
        cout << "\nValue of marks = " << marks << endl;

        cout << "\nValue of age using object" << u.age << endl;
        cout << "Value of marks using object" << u.marks;

        return User(age - u.age, marks - u.marks);
    }
};

int main()
{
    User u1(23, 77);
    User u2(24, 78);
    User u3 = u1 + u2;
    cout << "\n u3.marks = " << u3.marks;
    cout << "\n u3.age = " << u3.age;
}
