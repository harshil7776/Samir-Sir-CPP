#include <iostream>
#include <string>
#include <map>
using namespace std;

class Product1
{
public:
    int id;
    string name;
    int price;
    float dis;

    Product1() {};

    Product1(int id, string name, int price, float dis)
    {
        this->id = id;
        this->name = name;
        this->price = price;
        this->dis = dis;
    }
};

int main()
{
    Product1 p1(101, "Iphone", 45000, 10);

    map<string, Product1> products;
    products["Harshil"] = p1;
    products["Ram"] = Product1(1001, "charger", 2000, 5);

    for (auto prod : products)
    {
        cout << "\n"
             << prod.first << "-" << prod.second.id << "-" << prod.second.name;
    }

    return 0;
}