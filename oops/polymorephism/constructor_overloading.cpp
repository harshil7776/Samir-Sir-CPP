#include<iostream>
#include<string>
using namespace std;

class Employee
{
    public :
        int age;
        Employee()
        {
            cout<<"\nEmployee class default const...";
            this->age=25;
        }
        Employee(int salary)
        {
            cout<<"\nemployee class 1 param with salary function called.."<<salary;
            this->age=26;
        }
        Employee(string name,int age)
        {
            cout<<"\nemployee name = "<<name;
            cout<<"\nemployee age = "<<age;
            this->age=age;
        }
        void getAge()
        {
            cout<<"\nAge = "<<this->age;
        }
};
int main()
{
    Employee emp1;
    Employee emp2(10000);
    Employee emp3("ram",23);

    emp3.getAge();
    
}
