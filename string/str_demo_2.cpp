#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str = "Hello all this is";
    string str2;

    cout<<"\nSize = "<<str.size();
    cout<<"\n length = "<<str.length();
    cout<<"\n capacity = "<<str.capacity();
    cout<<"\n empty ?? "<<str.empty();

    return 0;
}