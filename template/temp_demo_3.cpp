#include<iostream>
using namespace std;

template <typename T>
class Calc{

    public :    
        T add(T a,T b)
        {
            return a + b;
        }
};
int main()
{
    Calc <int> c1;
    cout<<"Ans1 = "<<c1.add(10,20);
    cout<<"\nAns1 = "<<c1.add(10.20,20.50);

    Calc <float>c2;
    cout<<"\nAns2 = "<<c2.add(10.20,20.35);
    cout<<"\nAns2 = "<<c2.add(10,11);

    Calc <string> c3;
    cout<<"\n ans = "<<c3.add("ram","sharma");
    cout<<"\n ans = "<<c3.add("64","1");
    //cout<<"\n ans = "<<c3.add(64,1); error..
}