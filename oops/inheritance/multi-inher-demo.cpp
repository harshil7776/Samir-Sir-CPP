#include<iostream>
using namespace std;

class Watch
{
    public :
        float Time;

    void time()
    {
        cout<<"Time in watch : 10:45 A.M"<<endl;
    }
    void call()
    {
        cout<<"Calling from watch..."<<endl;
    }
};

class Phone
{
    public :
        string msg="Hello my name is harshil.....";

    void time()
    {
        cout<<"Time in phone : 10:45 P.M"<<endl;
    }
    void message()
    {
        cout<<"Message from phone..."<<endl;
    }
};

class SmartDevice : public Watch , public Phone
{
    public :
        string docall="Calling Harshil...";

    void display()
    {
        Watch::time();
        cout<<"Message : "<<msg<<endl;
        cout<<"Do Call : "<<docall<<endl;
    }
};

int main()
{
    SmartDevice s;

    s.Watch::time();
    s.Phone::time();
    s.Phone::message();
    s.display();

    return 0;
}
