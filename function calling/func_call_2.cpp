#include <iostream>
using namespace std;

class Shape
{
public:
    int data;

    Shape(int x)
    {
        this->data = x;
    }

    // Shape area()
    // {
    //     Shape s1(100)
        
    //     return s1;
    // }

    // c = 100;
    // return c;
    // return 100;

    Shape area()
    {
        return Shape(100);
    }
};


int main()
{
    Shape x(1000);
    Shape x2 = x.area();
    cout<<"\n x2 - "<<x2.data;
}