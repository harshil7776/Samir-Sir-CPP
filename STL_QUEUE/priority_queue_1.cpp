#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(100);
    pq.push(77);
    pq.push(870);
    pq.push(110);
    pq.push(64);

    while (!pq.empty())
    {
        cout<<"\n"<<pq.top();
        pq.pop();
    }
    return 0;
    
}