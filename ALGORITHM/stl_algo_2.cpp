#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// int main()
// {
//     vector<int> v = {100, 20, 34, 56, 78, 120, 1, 23, 54};

//     auto i = find(v.begin(), v.end(), 34);

//     if (i != v.end())
//     {
//         cout << "\nFound Index : " << (i - v.begin());
//         cout << "\nFound : " << *i;
//     }
//     else
//     {
//         cout << "\nNot Found..";
//     }
// }
//=====================================================================

// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<string> v1 = {"ram", "amit", "harshil", "ziya", "neha"};

//     auto i = find(v1.begin(), v1.end(), "harshil");

//     if (i != v1.end())
//     {
//         cout << "\nFound Index : " << (i - v1.begin());
//         cout << "\nFound : " << *i;
//     }
//     else
//     {
//         cout << "\nNot Found..";
//     }
// }

int main()
{
    vector<int> v={10,20,30,40,50,60,70};
    int i = count(v.begin(),v.end(),2);

    for (int i : v)
    {
        cout<<"\n"<<i;
    }
}