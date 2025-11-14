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
    v.push_back(300);
    v.push_back(45);
    v.push_back(50);
    v.push_back(77);

    for (int x : v)
    {
        cout << "  x =" << x;
    }
    cout << "\n";
    v.pop_back();

    for (int x : v)
    {
        cout << "  x = " << x;
    }
    v.erase(v.begin() + 2);
    cout << "\n";
    for (int x : v)
    {
        cout << "  x = " << x;
    }

    v.clear();
    cout << "\n";
    for (int x : v)
    {
        cout << "  x = " << x;
    }
}
