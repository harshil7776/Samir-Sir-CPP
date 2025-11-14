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
        Employee() : User(20)
        {
            cout<<"\nEmployee class default const called...";
        }
};
int main()
{
    Employee emp;

}