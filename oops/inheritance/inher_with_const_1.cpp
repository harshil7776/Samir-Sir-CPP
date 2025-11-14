#include<iostream>
using namespace std;

class User
{
    public :
        User()
        {
            cout<<"\nUser class default const...";
        }
};
class Employee : public User
{
    public :
        Employee()
        {
            cout<<"\nEmployee class default const called...";
        }
};
int main()
{
    Employee emp;

}