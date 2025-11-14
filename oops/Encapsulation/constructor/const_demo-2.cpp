#include<iostream>
using namespace std;

class Shape
{
    public :
        Shape(int h,int w)
        {
            cout<<"\nShape class parameter called...";
            cout<<"\n h = "<<h;
            cout<<"\n w = "<<w;
        }
};
int main()
{
    Shape s(10,20);
    
}