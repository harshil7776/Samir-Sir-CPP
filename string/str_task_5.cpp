#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name = "abcdf";

    for(int i=1;i<name.size();i+=2)
    {
        name.insert(i,"-");
    }

    cout<<"\n "<<name;
}