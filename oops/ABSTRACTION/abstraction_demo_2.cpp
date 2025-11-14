#include<iostream>
using namespace std;

class TRAI
{
    public :
        virtual void call()=0;
};

class Jio : public TRAI
{
    void call() override
    {
        cout<<"\nJio calling..";
    }
};

int main()
{
    TRAI *t;
    Jio j;
 
    t = &j;
    t->call();
}