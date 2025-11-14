// multilevel : --> a -->param(2 param)-->b(1 param)-->c()defult->

#include <iostream>
using namespace std;

class A
{
public:
    A(int x, int y)
    {
        cout << "\nClass A constructor called... " << x << y;
    }
};

class B : public A
{
public:
    B(int z) : A(10, 20)
    {
        cout << "\nClass B constructor called..." << z;
    }
};

class C : public B
{
public:
    C() : B(30)
    {
        cout << "\nClass C constructor called...";
    }
};

int main()
{
    C multilevel;

    return 0;
}
