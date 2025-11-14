#include <iostream>
using namespace std;

class Shape
{
public:
    float pi = 3.14;

    void getArea()
    {
        cout << "\nArea function called without any kind of area...";
    }
    void getArea(float r)
    {
        cout << "\nArea function called for circle...";
        float area = pi * (r * r);
        cout << "\nArea of circle = " << area;
    }
    void getArea(int h)
    {
        cout << "\nArea function called for square...";
        int area = h * h;
        cout << "\nArea of circle = " << area;
    }
    void getArea(int h, int w)
    {
        cout << "\nArea function called for triangle..";
        int area = 0.5 * h * w;
        cout << "\nArea of triangle = " << area;
    }
};
int main()
{
    Shape s;
    s.getArea();
    s.getArea(10);
    s.getArea(10.0f);
    s.getArea(10, 20);

    return 0;
}