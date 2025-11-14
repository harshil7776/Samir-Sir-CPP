#include<iostream>
using namespace std;

class India
{
    public :
        float tax = 10.0f;
        int population = 140000000;

        void pride()
        {
            cout<<"proud to be indian..."<<endl;
        }
};
class Gujarat 
{
    public :
        int grant = 10000;
        int population = 6000000;

        void pride()
        {
            cout<<"Pround to be gujarati..."<<endl;
        }
};
class Ahmedabad : public India,public Gujarat
{
    public :
        int population = 8000000;
        void display()
        {
            cout<<"Tax : "<<tax<<endl;
            cout<<"Grant : "<<grant<<endl;
            cout<<"Population : "<<population<<endl;
            cout<<"Population of India : "<<India::population<<endl;
            cout<<"Population of Gujarat : "<<Gujarat::population<<endl;
        }
};
int main()
{
    Ahmedabad a;
    a.display();
    a.India::pride();
    a.Gujarat::pride();

    cout<<"ahmedabad population : "<<a.population<<endl;
    cout<<"population of India : "<<a.India::population<<endl;
    cout<<"Population of Gujarat : "<<a.Gujarat::population<<endl;

    return 0;
}
    

    
