#include<iostream>
using namespace std;

class User
{
    public :
        User(int age)
        {
            cout<<"\nUser class default const..."<<age;
        }
};
class Employee : public User
{
    public :
        // Employee() : User(20)
        // {
        //     cout<<"\nEmployee class default const called...";
        // }
        Employee(int age) : User(age)
        {
            cout<<"\nEmployee class paramiter constructor called..."<<age;
        }
};
int main()
{
    Employee emp(20);

}