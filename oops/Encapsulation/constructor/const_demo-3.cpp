#include<iostream>
using namespace std;

class Instagram
{
    public :
        string userName;

    Instagram(string uname)
    {
        userName = uname;
    }
    void getuserName()
    {
        cout<<"\nuserName = "<<userName;
    }
};
int main()
{

    Instagram u1("ram");
    u1.getuserName();
    Instagram u2("seeta");
    u2.getuserName();
    
}