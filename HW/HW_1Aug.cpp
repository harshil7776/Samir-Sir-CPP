#include <iostream>
using namespace std;

class Product
{
public:
    int id;
    char name[50];
    float price;
    int qty;
};
int main()
{
    Product p;

    cout << "enter product id :";
    cin >> p.id;

    cout << "enter name :";
    cin >> p.name;

    cout << "enter price :";
    cin >> p.price;

    if (p.price < 0)
    {
        cout << "ERROR::Price can not negative...";
    }

    cout << "\nenter quantity :";
    cin >> p.qty;

    if (p.qty < 0)
    {
        cout << "\n\nERROR::Quantity can not negative...";
    }

    cout << "id :" << p.id << endl;
    cout << "name :" << p.name << endl;
    cout << "price :" << p.price << endl;
    cout << "Quantity :" << p.qty << endl;

    return 0;
}