// 1==>
#include <iostream>
#include <string>
using namespace std;

// int main()
// {
//     string s = "harshil";

//     // cout<<"reverse : "<<s.reserve();
//     //     cout<<s.at(6)<<s.at(5)<<s.at(4)<<s.at(3)<<s.at(2)<<s.at(1)<<s.at(0);
    
//     return 0;
// }

// 2===>

// int main()
// {
//     string s;

//     cout<<"Enter a string : ";
//     cin>>s;
//     cout<<s.at(6)<<s.at(5)<<s.at(4)<<s.at(3)<<s.at(2)<<s.at(1)<<s.at(0);

//     return 0;
// }

//6==>Count Vowels (using size() and at())
// int main()
// {
//     string s = "harshil";
//     int i , count=0;
//     cout<<"Size : "<<s.size();
//     cout<<"\n1="<<s.at(0);
//     cout<<"\n2="<<s.at(1);
//     cout<<"\n3="<<s.at(2);
//     cout<<"\n4="<<s.at(3);
//     cout<<"\n5="<<s.at(4);
//     cout<<"\n6="<<s.at(5);
//     cout<<"\n7="<<s.at(6);

//     for(i=0;i<s.size();i++)
//     {
//         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'||s[i]=='u')
//         {
//             count++;
//         }
//     }
//     cout<<"\nVowel : "<<count;

//     return 0;

// }

// Capitalize Middle Character (using at())

// int main()
// {
//     string s = "harshil";

// }

//====>
// Remove Extra Spaces (using erase())
// Input: "I love C++"
// Output: "I love C++"
// int main()
// {
//     string s = "I love C++";
    
//     s.erase(1,1);
//     s.erase(5,1);
//     cout << "\n s = " << s;
//     return 0;
// }


//=====>
// Insert Separator (using insert())
// Input: "abcdef", Output: "a-b-c-d-e-f"
// Insert "-" between every two characters.
// int main()
// {
//     string s = "abcdef";

//     s.insert(1,"-");
//     s.insert(3,"-");
//     s.insert(5,"-");
//     s.insert(7,"-");
//     s.insert(9,"-");

//     cout<<"Output : "<<s;

//     return 0;

// }
// //=====>
// Replace Word (using replace())
// Input: "I like Java"
// Replace "Java" with "C++".
// int main()
// {
//     string s =  "I like Java";

//     s.replace(7,11,"C++");

//     cout<<"REplaced : "<<s;

//     return 0;
// }

//=======>>>

// Trim String (using erase() and size())
// Input: " hello world "
// Remove leading and trailing spaces manually.

// int main()
// {
//     string s = " hello world ";

//     s.erase(0,1);
//     s.erase(11,1);

//     cout<<"Output : "<<s;

//     return 0;
// }

// Dynamic Buffer Test (using capacity())
// Start with an empty string. Keep appending characters (append() or
//  push_back()) one by one.
// Print size() and capacity() after each step to observe capacity doubling 
// behavior.
// int main()
// {
//     string s = "";

//     s.append("h");
//     cout<<"\nsize : "<<s.size();
//     cout<<"\ncapacity : "<<s.capacity();
//     cout<<"\n"<<s;

    
//     s.append("a");
//     cout<<"\nsize : "<<s.size();
//     cout<<"\ncapacity : "<<s.capacity();
//     cout<<"\n"<<s;
    
//     s.append("r");
//     cout<<"\nsize : "<<s.size();
//     cout<<"\ncapacity : "<<s.capacity();
//     cout<<"\n"<<s;
    
//     s.append("s");
//     cout<<"\nsize : "<<s.size();
//     cout<<"\ncapacity : "<<s.capacity();
//     cout<<"\n"<<s;
    
//     s.append("h");
//     cout<<"\nsize : "<<s.size();
//     cout<<"\ncapacity : "<<s.capacity();
//     cout<<"\n"<<s;
    
//     s.append("i");
//     cout<<"\nsize : "<<s.size();
//     cout<<"\ncapacity : "<<s.capacity();
//     cout<<"\n"<<s;
    
//     s.append("l");
//     cout<<"\nsize : "<<s.size();
//     cout<<"\ncapacity : "<<s.capacity();
//     cout<<"\n"<<s;

//     return 0;
// }

// Clear After Use
// Input a sentence. Process it (for example: count vowels).
// Then call clear() and confirm by checking empty().

int main()
{
    string s = "harshil";
    int i , count=0;
    cout<<"Size : "<<s.size();
    cout<<"\n1="<<s.at(0);
    cout<<"\n2="<<s.at(1);
    cout<<"\n3="<<s.at(2);
    cout<<"\n4="<<s.at(3);
    cout<<"\n5="<<s.at(4);
    cout<<"\n6="<<s.at(5);
    cout<<"\n7="<<s.at(6);

    for(i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'||s[i]=='u')
        {
            count++;
        }
    }
    cout<<"\nVowel : "<<count;

    s.clear();
    cout<<"\nclear : "<<s;

    s.empty();
    cout<<"\nEmpty : "<<s;

    return 0;
}