#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main()
{
    priority_queue<pair<int,string>> hospital;
    hospital.push({3 , "Normal patient"})  ;
    hospital.push({10 , "heart atack"})  ;
    hospital.push({5 , "accident"}) ;
    hospital.push({1 , "routine check up" }) ;

    while(!hospital.empty())
    {
        cout<<"\n serving : "<<hospital.top().second;
        hospital.pop();
    }
    return 0;
}
