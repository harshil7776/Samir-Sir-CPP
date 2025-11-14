#include <iostream>
using namespace std;

class Calc
{
public:
    int a , b ;

    int add(int a, int b)
    {
        return a + b;
    }
    int sub(int a, int b)
    {
        return a - b;
    }
    int mul(int a, int b)
    {
        return a * b;
    }
    int div(int a, int b)
    {
        return a / b;
    }
};
int main()
{
    Calc c;
    int a, b, choice;

    cout << "enter 1 for add" << endl;
    cout << "enter 2 for sub" << endl;
    cout << "enter 3 for mul" << endl;
    cout << "enter 4 for div" << endl;
    cout << "enter your choice(1-4) : " << endl;
    cin >> choice;

    cout<<"Enter two numbers : ";
    cin>>a>>b;

    switch (choice)
    {
    case 1:
        cout << "Total = " << c.add(a, b) << endl;
        break;

    case 2:
        cout << "Total = " << c.sub(a, b) << endl;
        break;

    case 3:
        cout << "Total = " << c.mul(a, b) << endl;
        break;

    case 4:
        cout << "Total = " << c.div(a, b) << endl;
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}