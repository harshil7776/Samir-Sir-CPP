// create vector for users typr string
// aman
// madam
// naman
// jay
// raj..

// declare another vector same for string
// from user vector check palindrome name if name is palindrome store in other vecotr..

#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main()
{
    vector<string> name;
    vector<string> newlist;
    string choice;

    while(true)
    {
        cout<<"Enter exit if you want to enter name else enter name : ";
        cin>>choice;

        if(choice=="exit")
        {
            break;
        }
        else
        {
            name.push_back(choice);
        }
    }
    for(string n : name)
    {
        bool isPalindrome = true;

        for(int i=0;i<n.size()/2;i++)
        {
            if(n[i]!=n[n.size()-i-1])
            {
                isPalindrome=false;
                break;
            }
        }
        if(isPalindrome)
        {
            newlist.push_back(n);
        }
    }
    cout<<"\nPalindrome name : ";

    for(string p : newlist)
    {
        cout<<p<<" ";
    }
    cout<<endl;


}

//===================================================
// remove duplicate item/names from vector
// #include <iostream>
// #include <vector>

// using namespace std;
// int main()
// {
//     vector<string> v = {"raj", "jay", "jay", "aman", "jay", "aman", "raj"};
//     vector<string> v1;

//     for (int i = 0; i < v.size(); i++)
//     {
//         for(int j=0;j<v1.size();j++)
//         {
//             if(v[i]==v1[j])
//             {
//                 break;
//             }
//         }
//     }
//     for(int )
// }