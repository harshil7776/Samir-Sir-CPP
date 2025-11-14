#include <iostream>
using namespace std;

class Gov
{
public:
    
};

class State : public Gov
{

public:
    void paytax()
    {
        // cout<<"\n Tax method of state class called...";

        Gov ::paytax();
    }
};

int main()
{
    State s;
    s.paytax();
}