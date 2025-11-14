#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
    map<string, string> m = {{"guj", "Gandhinagar"}, {"UP", "Lucknow"}, {"mah", "Mumbai"}, {"Guj", "Ahmedabad"}};

    cout << "\n"<< m["Guj"];
    cout << "\n"<< m.at("UP");

    // 1st way
    m["Punjab"] = "Chandigadh";

    // 2nd way
    m.insert({"Raj", "Jaipur"});

    // 3rd way
    m.insert(make_pair("MP", "Bhopal"));


    for (auto &pair : m)
    {
        cout << "\n"
             << pair.first << "-" << pair.second;
    }
}