#include<iostream>
#include<string>
using namespace std;
//====>to print reverse string..
// int main()
// {
//     string name = "harshil";
//     int i;
//     for(i=name.size()-1;i>=0;i--)
//     {
//         cout<<name.at(i);
//     }
// }

// //=====>check wheather the string is palindrome or not
// int main()
// {
//     string name= "ritesr";//input even digit name

//     bool isPalindrome = true;

//     for(int i=0;i<name.size()/2;i++)
//     {
//         if(name.at(i)!=name.at(name.size()-1-i))
//         {
//             isPalindrome = false;
//             break;
//         }
//     }
//     cout<<"palindrome : "<<isPalindrome;
// }

int main()
{
    string name ="ajay";
    int count = 0;

    for(int i=0;i<name.size()-1;i++)
    {
        char c = name.at(i);

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            count++;
        }
    }
    cout<<"\nVowel count = "<<count;
}