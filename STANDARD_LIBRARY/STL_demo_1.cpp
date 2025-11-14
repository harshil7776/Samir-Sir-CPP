#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    cout << "\n 0-->" << v[0];

    for (int i = 0; i < v.size(); i++)
    {
        cout << "\nEle  = " << v[i];
    }

    for (int x : v)
    {
        cout << "\n " << x;
    }
}
