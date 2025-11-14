#include<iostream>
using namespace std;
class Demo
{
    public: 
        int x = 100;

};
int main()
{
    Demo d;
    cout<<"x = "<<d.x;

    int no1;
    cout<<"enter value of no1 : ";
    cin>>no1;
    cout<<"Value of no1 =  "<<no1;
}