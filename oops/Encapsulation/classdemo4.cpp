#include<iostream>
using namespace std;

class Employee
{

    public :
        int salary = 30000;
        int age = 20;

    int getSalary()
    {
        cout<<"\nSalary function called..";
        return salary;
    }
    int getAge();
};
int Employee :: getAge()
{
    cout<<"\nGet age function called..";
    return age;
}

int main()
{
    Employee emp;
    int empSal,empAge;
    empSal = emp.getSalary();
    cout<<"\nEmployee Salary = "<<empSal;
    empAge = emp.getAge();
    cout<<"\nEmployee age = "<<empAge;

    cout<<"\nEmployee age direct in function = "<<emp.getAge();

    return 0;
    
}

