#include<iostream>
using namespace std;

class Balance
{
    public :
        int bal;
        Balance(int bal)
        {
            this->bal=bal;
        }

        bool operator ==(const Balance &b)
        {
            cout<<"\n == operator function called...";

            return bal == b.bal;
        }
};

int main()
{
    Balance harshil(10000);
    Balance harsh(1000);

    // bool x = harshil == harsh;
    // cout<<"\n x"<<x;
    
    if(harshil == harsh)
    {
        cout<<"\nBoth have same balance";
    }else
    {
        cout<<"\nBoth has not same balance";
    }

}