#include<iostream>
#include<string>
#include<queue>

using namespace std;
int main()
{
    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);
    q.push(500);

    cout<<"\nFront = "<<q.front();
    cout<<"\nBack = "<<q.back();
    cout<<"\nSize = "<<q.size();

    q.pop();

    cout<<"\nFront = "<<q.front();

    while(!q.empty())
    {
        cout<<"\n"<<q.front();
        q.pop();
    }
}
