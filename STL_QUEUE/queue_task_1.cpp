#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Pizza");
    q.push("burger");
    q.push("pasta");
    q.push("roti");
    q.push("sabji");

    cout<<"\nFirst order = "<<q.front();
    cout<<"\nLast order = "<<q.back();
    cout<<"\nTotal order = "<<q.size();

    while(!q.empty())
    {
        cout<<"\n"<<q.front();
        q.pop();
    }
}