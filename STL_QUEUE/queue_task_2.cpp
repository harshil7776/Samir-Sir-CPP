// 1. Traffic Signal Simulation Using Queue 🧠 Cars arrive at a signal 
// and pass when the light is green. ✅ Features Cars enter a // queue Only 
// 3 cars pass per green signal Remaining cars wait for next signal 
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("c1");
    q.push("c2");
    q.push("c3");
    q.push("c4");
    q.push("c5");
    q.push("c6");

    for (int i = 0; i < 3; i++)
    {
        cout << q.front() << "\nCar passed..";
        q.pop();
    }
    cout<<"\nCar waiting : "<<q.size();

    return 0;
}
