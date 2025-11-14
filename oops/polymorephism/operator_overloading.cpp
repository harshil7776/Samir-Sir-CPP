//increment 
// #include<iostream>
// #include<string>
// using namespace std;

// class Counter
// {
//     public :
//         int value;

//     Counter(int v)
//     {
//         this->value=v;
//     }
//     void operator ++()
//     {
//         cout<<"\n Post fix operator overloaded called...";
//         this->value++;
//     }
//     void operator ++(int)
//     {
//         cout<<"\n post fix operator overload called...";
//     }
//     void display()
//     {
//         cout<<"\nvalue of value = "<<this->value;
//     }
// };
// int main()
// {
//     Counter c1(100);
//     ++c1;
//     c1.display();
//     c1++;

//     return 0;
// }

//decrement
#include<iostream>
#include<string>
using namespace std;

class Counter
{
    public :
        int value;

    Counter(int v)
    {
        this->value=v;
    }
    void operator --()
    {
        cout<<"\n Post fix operator overloaded called...";
        this->value--;
    }
    void operator --(int)
    {
        cout<<"\n post fix operator overload called...";
    }
    void display()
    {
        cout<<"\nvalue of value = "<<this->value;
    }
};
int main()
{
    Counter c1(100);
    --c1;
    c1.display();
    c1--;

    return 0;
}

