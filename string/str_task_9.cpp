#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;

    for(int i=0;i<20;i++)
    {
        s.append("s");
        cout<<"\nSize : "<<s.size();
        cout<<"\nCapacity : "<<s.capacity();
    }
    return 0;
}