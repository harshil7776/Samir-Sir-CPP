#include<iostream>
using namespace std;

class Driver;
class Car
{
    int liter;

    public :
        Car(int l)
        {
            this->liter = l;
        }

    friend int calculateAvg(Car , Driver);
};

class Driver
{
    int distance;

    public :
        Driver(int dist)
        {
            this->distance = dist;
        }

    friend int calculateAvg(Car , Driver);
};

int calculateAvg(Car c, Driver d)
{
    return d.distance / c.liter; 
}

int main()
{
    Driver d1(100);
    Car c1(10);
    
}