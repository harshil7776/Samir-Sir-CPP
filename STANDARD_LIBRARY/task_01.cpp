// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<string> v;
//     int choice,del;
//     string name;

//     while (true)
//     {
//         cout << "\n1. continue..";
//         cout << "\n2. Exit..";
//         cout << "\nEnter your choice : ";
//         cin >> choice;

//         if (choice == 1)
//         {
//             cout << "\nEnter name : ";
//             cin >> name;
//             v.push_back(name);
//         }
//         else if (choice == 2)
//         {
//             break;
//         }
//     }

//     for (string x : v)
//     {
//         cout << " " << x;
//     }

//     cout<<"Please enter name to delete : ";
//     cin>>del;

// }
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> v;
    int choice, i;
    string name, del;

    while (true)
    {
        cout << "\n1. continue..";
        cout << "\n2. Exit..";
        cout << "\nEnter your choice : ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nEnter name : ";
            cin >> name;
            v.push_back(name);
        }
        else if (choice == 2)
        {
            break;
        }
    }

    for (string x : v)
    {
        cout << " " << x;
    }

    cout << "\nPlease enter name to delete : ";
    cin >> del;

    for (i = 0; i < v.size(); i++)
    {
        if (v[i] == del)
        {

        }
    }
}
