#include<iostream>
using namespace std;

class Facebook
{
    public :
        virtual void smile() = 0;
};

class Vishwesh : public Facebook
{
    public :
        void smile()
        {
            cout<<"\n'_' smile by vishwesh and company";
        }
};

class Fenil : public Facebook
{
    void smile()
    {
        cout<<"\n '~' smile by vishwesh and company";
    }
};

int main()
{
    Vishwesh v;
    Facebook *f;

    f = &v;
    f->smile();

    Fenil fenil;
    f = &fenil;
    f->smile();
}
