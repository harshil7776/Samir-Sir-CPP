#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "i like java";
    int pos = s.find("java");

    cout<<"\nPos = "<<pos;

    if(pos<11)
    {
        cout<<"\nInside if...";
        s.replace(pos,4,"c++");
    }
    cout<<"\nS = "<<s;
}