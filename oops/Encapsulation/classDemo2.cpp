#include <iostream>
using namespace std;
class Calc
{
public:
    int no1, no2, ans = 0;
};
int main()
{
    Calc c;

    cout << "\nEnter no1 :";
    cin >> c.no1;

    cout << "\nenter no2 : ";
    cin >> c.no2;

    c.ans = c.no1 + c.no2;

    cout << "ans = " << c.ans;

    // return 0;
}