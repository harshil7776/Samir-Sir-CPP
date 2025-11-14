#include<iostream>
#include<string>
using namespace std;

int main()
{
    string email = "   samir@gmail.com   ";

    if(email.at(0)==' ')
    {
        email.erase(0,1);
    }
    if(email.back()==' ')
    {
        email.erase(email.size()-1,1);
    }
    for(int i=0;i<email.size()-1;i++)
    {
        if(email.at(i)==' ' && email.at(i+1)==' ')
        {
            email.erase(i,1);
            i--;
        }
    }
    cout<<"\nEmail"<<email;
}