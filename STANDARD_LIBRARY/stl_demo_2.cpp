#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.insert(v.begin() + 1, 15);

    for (int x : v)
    {
        cout << "\n x = " << x;
    }
    cout << "\n using at " << v.at(2);
    cout << "\n using front " << v.front();
    cout << "\n using front " << v.back();
}