#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name = "java";
    //operator []
    cout<<"\nUsing [] "<<name[100];
    //at()
    cout<<"\n using at"<<name.at(1);//exception if out of range...
    //front
    cout<<"\n using front "<<name.front();
    //back
    cout<<"\n using backcls "<<name.back();
}