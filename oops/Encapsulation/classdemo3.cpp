#include <iostream>
using namespace std;

class Bank
{
public:
    float balance = 0;

    void withdraw(float amount)
    {
        if (amount > balance)
        {
            cout << "\nInsufficient balance...";
        }
        else
        {
            balance = balance - amount;
            cout << "\nWithdraw process done successfully.." << endl;
            cout << "after withdraw balance is :" << balance << endl;
        }
    }
    void deposite(float amount);
};
void Bank ::deposite(float amount)
{
    balance = balance + amount;
    cout << "\nDeposite process is successfully done...";
    cout << "\nAfter deposite balance = " << balance;
}

int main()
{
    Bank bank;
    bank.deposite(1000);
    bank.withdraw(500);
}