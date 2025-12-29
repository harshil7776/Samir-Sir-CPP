#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;
int main()
{
    vector<int> v = {100, 20, 34, 56, 78, 120, 1, 24, 54};

    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "\nSum of V = " << sum;

    vector<int> v1 = {1, 2, 3, 4, 5};

    int product = accumulate(v1.begin(), v1.end(), 1, [](int a, int b)
                             { return a * b; });
    cout << "\nProduct = " << product;

    vector<string> v3 = {"hi", "hello", "ok"};
    int all = accumulate(v3.begin(), v3.end(), 0, [](int s1, string str)
                         { return s1 + str.length(); });
    cout << "\n all = " << all;

    vector<int> v4 = {10, 20, 30, 40, 50};
    auto itterator = lower_bound(v4.begin(), v4.end(), 30);
    cout << "\n--->" << (itterator - v4.begin());
    ;
    cout << "\n--->" << *itterator;

    auto itterator2 = upper_bound(v4.begin(), v4.end(), 31);
    cout << "\n--->" << (itterator2 - v4.begin());
    cout << "\n-->" << *itterator2;

    //     vector<int> v5 = {1,2,2,3,4,5,65,4,4,2,1};
    //     auto dele = remove(v5.begin(), v5.end(), 2);
    //     cout << "\n---> " << (dele - v5.begin());
    vector<int> v5 = {1, 2, 2, 3, 4, 5, 65, 4, 4, 2, 1};

    v5.erase(remove(v5.begin(), v5.end(), 2), v5.end());

    for (int x : v5)
        cout << x <<"\n" <<"\t";
}
