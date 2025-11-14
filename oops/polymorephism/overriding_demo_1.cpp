#include<iostream>
using namespace std;

class Gov
{
    public :
        void paytax()
        {
            cout<<"\nTax method on gov class called...";
        }
};

class State : public Gov
{
    public :
        void paytax()
        {
            // cout<<"\ntax method of state class called..";
            Gov::paytax();
        }
};

int main()
{
    State s;
    s.paytax();
}