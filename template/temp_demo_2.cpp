#include<iostream>
#include<string>
using namespace std;

template <typename T>
class Box{

    public :
        T a;
        Box(T a)
        {
            this->a=a;
        }

        void printData()
        {
            cout<<"\n a = "<<a;
        }
};
int main()
{
    Box <int>   b1(89.90);
    b1.printData();

    Box <string>b2("java");
    b2.printData();
}
