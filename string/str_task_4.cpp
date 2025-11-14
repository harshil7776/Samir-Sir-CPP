#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name = "kunal";

    if(name.size()%2==1)
    {
        int mid = name.size()/2;
        cout<<"\n mid : "<<mid;

        name.at(mid) = toupper(name.at(mid));
    }else
    {
        cout<<"\n no middle char found..";
    }

    cout<<"\n after : "<<name;
}