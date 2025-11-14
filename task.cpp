#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    int id;
    string name;
};
class Account
{
public:
    virtual void deposite(int n) = 0;
    virtual void withdraw(int n) = 0;
};
class Customer : public Person, public Account
{
private:
    int balance;

public:
    Customer details()
    {
        cout << "Enter Customer Details : " << endl;
        cin >> this->name;
        cout << "Enter customer ID : " << endl;
        cin >> this->id;
        cout << "Initial balance : " << endl;
        cin >> this->balance;
    }
    void deposite(int amt)
    {
        balance = balance + amt;
        cout << "Deposite amount : " << amt;
        cout << "New balance : " << balance;
    }
    void withdraw(int amt)
    {
        balance = balance - amt;
        cout << "Withdraw amount : " << amt;
        cout << "New balance : " << balance;
    }
    Customer role()
    {
        cout << "Can deposite and withdraw mney...";
    }
    friend void check_balance(Customer);

    int operator+(Customer c)
    {
        return this->balance + c.balance;
    }
};
void check_balance(Customer c)
{
    cout << "Your balance  : " << c.name << "is" << c.balance;
}
class Employee : public Person
{
public:
    int id;
    string name;
    Employee details()
    {
        cout << "Enter Employee Details : " << endl;
        cout << "Enter name : " << endl;
        cin >> this->name;
        cout << "Enter ID : ";
        cin >> this->id;
    }
    Employee role()
    {
        cout << "Manages customer accounts...";
    }
};

int main()
{
    Customer c1;
    Customer c2;
    Employee e1;

    c1.role();
    e1.role();

    cout << "Depositing 2000" << endl;
    c1.deposite(2000);

    cout << "Withdraw 1000" << endl;
    c1.withdraw(1000);

    cout << "Depositing 5000" << endl;
    c1.deposite(5000);

    cout << "Withdraw 500" << endl;
    c1.withdraw(500);

    check_balance(c1);

    cout << "Adding balance of two customer.." << endl;

    int total = c1 + c2;
    cout << "Total balance : " << total;

    return 0;
}