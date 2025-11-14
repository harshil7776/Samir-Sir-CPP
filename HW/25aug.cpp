#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;
    float marks;

    Student()
    {
        cout << "Default constructor called...";
        name = "Unknown";
        age = 0;
        marks = 0.0;
    }

    Student(string n)
    {
        cout << "Constructor with name called...";
        name = n;
        age = 0;
        marks = 0.0;
    }

    Student(string n, int a)
    {
        cout << "Constructor With name + age called...";
        name = n;
        age = 0;
        marks = 0.0;
    }

    Student(string n, int a, float m)
    {
        cout << "\nConstructor with name + age + marks called...";
        name = n;
        age = a;
        marks = m;
    }

    void showDetails()
    {
        cout << "\nName : " << name << "Age : " << age << "Marks : " << marks;
    }
};

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a,int b,int c)
    {
        return a+b+c;
    }

    float add(float a , float b)
    {
        return a+b;
    }

    string add(string s1 , string s2)
    {
        return s1 + " " + s2;
    }
};

int main()
{
    cout<<"\n\nStudent Object...";
    Student s1;
    Student s2("Harshil");
    Student s3("Harsh",20);
    Student s4("Raj",21,89.5f);

    s1.showDetails();
    s2.showDetails();
    s3.showDetails();
    s4.showDetails();

    return 0;
}