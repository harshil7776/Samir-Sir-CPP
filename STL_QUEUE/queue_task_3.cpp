// 2. Game Player Turn System (Round-Based)
// 🧠 Players take turns in order. After a turn, they go to the back again.
// ✅ Features
// Circular queue behavior
// Turns keep rotating
// Simulates a multiplayer game
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    queue<string> p;

    p.push("p1");
    p.push("p2");
    p.push("p3");
    p.push("p4");
    p.push("p5");
    p.push("p6");

    cout<<"size : "<<  p.size();
    
    while(!p.empty())
    {
        cout<<"\n"<<p.front();
        p.pop();
    }
}