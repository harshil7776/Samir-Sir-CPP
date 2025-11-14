#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "   samir@gmail.com   ";

    cout << "\nSize of s = " << s.size();

    while (!s.empty() && s.front() == ' ')
    {
        s.erase(0, 1);
    }
    cout << "\nAfter remove left side space " << s;
    cout << "\n aftr remove left side space lenght " << s.size();

    //"samir@gmail.com   "
    while (!s.empty() && s.back() == ' ')
    {
        s.erase(s.size() - 1, 1);
    }
    
    cout << "\n aftr remove left side space " << s;
    cout << "\n aftr remove left side space lenght " << s.size();
}