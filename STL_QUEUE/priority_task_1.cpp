#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> order;
    order.push(3);
    order.push(10);
    order.push(5);
    order.push(8);
    order.push(1);

    while(!order.empty())
    {
        cout<<"\nFar delivery first : "<<order.top();
        order.pop();
    }
    return 0;

}