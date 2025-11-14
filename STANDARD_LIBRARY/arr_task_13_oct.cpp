#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int choice, num;

    while (true)
    {
        cout << "\n1. Continue..";
        cout << "\n2. Exit..";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter a number: ";
            cin >> num;
            v.push_back(num);
        }
        else if (choice == 2)
        {
            cout << "\nYou chose to exit.\n";
            break;
        }
        else
        {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    cout << "\nNumbers entered: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
