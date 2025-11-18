// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> v = {100, 20, 34, 56, 34, 21, 89, 120};

//     // sort(v.begin(),v.end()); // asc
//     sort(v.begin(), v.end(), greater<int>()); // desc

//     for (auto i : v)
//     {
//         cout << "\n"
//              << i;
//     }

//     vector<string> v1 = {"ram", "amit", "harshil", "ziya", "neha"};
//     sort(v1.begin(), v1.end());

//     for (auto i : v1)
//     {
//         cout << "\n"
//              << i;
//     }

//     string name = "harshil";
//     sort(name.begin(), name.end());
//     cout << "\nNAme : " << name;

//     int arr[] = {10, 30, 59, 24, 56, 1, 95};
//     sort(arr, arr + 7);

//     for (auto x : arr)
//     {
//         cout << "\n"
//              << x;
//     }
// }
//============================================
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {100, 20, 34, 56, 34, 21, 89, 120};

    reverse(v.begin(), v.end()); // asc
    reverse(v.begin(), v.end()); // desc

    for (auto i : v)
    {
        cout << "\n"<< i;
    }

    vector<string> v1 = {"ram", "amit", "harshil", "ziya", "neha"};
    reverse(v1.begin(), v1.end());

    for (auto i : v1)
    {
        cout << "\n" << i;
    }

    string name = "harshil";
    reverse(name.begin(), name.end());
    cout << "\nNAme : " << name;

    int arr[] = {10, 30, 59, 24, 56, 1, 95};
    reverse(arr, arr + 7);

    for (auto x : arr)
    {
        cout << "\n"<< x;
    }
}
