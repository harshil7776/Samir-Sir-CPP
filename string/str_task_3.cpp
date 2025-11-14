#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name = "harshil";
    int count=0;

    for(int i=0;i<name.size()-1;i++)
    {
        char c = name.at(i);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            count++;
        }
    }
    cout<<"\n Vowel count = "<<count;
}