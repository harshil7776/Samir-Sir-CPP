#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="naman";
    bool isPalindrome=true;
    string temp=s;

    while(temp.size()>1)
    {

        if(temp.front()!=temp.back())
        {
            isPalindrome=false;
            break;
        }
        temp.erase(0,1);

        temp.erase(temp.size()-1,1);
    }
    if(isPalindrome==true)
    {
        cout<<"\nIt is palindrome...";
    }else{
        cout<<"\nIt is not palindrome...";
    }
    return 0;
}