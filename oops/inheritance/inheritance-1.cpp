#include<iostream>
using namespace std;
 class Parent
 {
    public :
        int amount = 1000;

        void display()
        {
            cout<<"parent class display function"<<endl;
        }
 };

 class Child : public Parent
 {
    public :
        void show()
        {
            cout<<"child class show function called..."<<endl;
            cout<<"amount from parent class :: "<<amount<<endl;
        }
        void callparentDisplay()
        {
            display();
        }
 };
 int main()
 {
    Child c;
    c.show();
    c.display();
    c.callparentDisplay();

    return 0;
 }