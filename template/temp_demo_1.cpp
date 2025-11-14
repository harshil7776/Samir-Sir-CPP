#include<iostream>
#include<string>
using namespace std;

// template <typename T>
// void test(T a){

//     cout<<"\nValue of a  = "<<a;

// }

// template <typename T>
// T add(T a,T b)
// {
//     return a + b;
// }
// int main()
// {
//     test(100);
//     test("java");
//     test(true);

//     string s = "cpp";
//     string s1 = " programming";

//     cout<<"\nValue of add : "<<add(10,20);

//     cout<<"\nValue of add : "<<add(s,s1);

//     auto x = add(100,200);
//     cout<<"\nValue of x  :"<<x;

//     string fname = "harshil";
//     string lname = "  thakkar";

//     auto fullname = add(fname,lname);
//     cout<<"\nFull name : "<<fullname;

// }
//================
template <typename T>

T maxNo(T a , T b)
{
    if(a>b)
    {
        return a;
    }else{
        return b;
    }
}
int main()
{
    auto x = maxNo(8462959,2348475);
    cout<<"Max : "<<x;
    auto x1 = maxNo(10,20);
    cout<<"\nMax : "<<x1;
    auto x2 = maxNo(10.9,2.5);
    cout<<"\nMax : "<<x2;
    auto x3 = maxNo("abc","abd");
    cout<<"\nMax : "<<x3;
    
}