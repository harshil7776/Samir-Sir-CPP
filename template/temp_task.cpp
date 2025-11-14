#include <iostream>
using namespace std;

template <typename T>

class Swap
{

public:
    T swap(T a, T b)
    {

        cout << "\nBefore swap : \n a : " << a << "\nb : " << b;
        T temp;
        temp = a;
        a = b;
        b = temp;
        cout << "\nAfter swap : \n a : " << a << "\nb : " << b;
    }
};

int main()
{
    Swap <int>s1;
    s1.swap(12,13);
    Swap <string>s2;
    s2.swap("harshil","thakkar");

    return 0;
}