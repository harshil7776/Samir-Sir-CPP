#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Python";

    s.append("#");
    cout << "\n s = " << s;

    s.erase(4, 2); // index pos, delete count...
    cout << "\n s = " << s;

    s.insert(2, "_");
    cout << "\n s = " << s;

    string x = "india is my country";
    x.replace(0, 5, "INDIA"); //(0-staring point,n-1 ending pos,"replace string..")
    cout << "\n x = " << x;

    x.clear();
    cout << "\n x = " << x;

    return 0;
}