#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<int , string> map;

    map[1] = "Raj";
    map[2] = "Harsh";
    map[3] = "Tirth";
    map[4] = "Shivam";
    map[5] = "Rahul";

    //erase by key
    // map.erase(2);
    // map.clear();

    if(map.count(3))
    {
        cout<<"\nKey is present..";
    }

    for(auto i : map)
    {
        cout<<"\n"<<i.first<<"-"<<i.second;
    }

    return 0;
}