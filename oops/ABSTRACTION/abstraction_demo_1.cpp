#include<iostream>
using namespace std;

class TRAI
{
    public :
        virtual void call()=0;
};

class Jio : public TRAI
{
    public :
        void call() override
        {
            cout<<"\nJio calling..";
        }
};

int main()
{
    Jio j;
    j.call();

}