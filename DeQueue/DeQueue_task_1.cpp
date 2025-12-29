// A smart parking lot works like this:
// Regular cars enter from the back
// VIP / Emergency vehicles enter from the front
// Parking spots are limited
// Cars can leave from front or back
// A specific car can leave from the middle
// Admin can view, search, and reset the parking system
// ===========================================
// students must implement:
// Add regular car (back)
// Add VIP car (front)
// Remove front car (exit gate 1)
// Remove back car (exit gate 2)
// Remove car by number (middle erase)
// Display all parked cars (index + iterator)
// Search car
// Show total cars
// Clear parking lot
#include <iostream>
#include <deque>
#include <string>

using namespace std;
int main()
{
    deque<string> parking_lot;
    int choice;
    do
    {
        cout << "1. add regular car (back) : " << endl;
        cout << "2. add vip car (front) : " << endl;
        cout << "3. remove front car (exit gate 1) : " << endl;
        cout << "4. Remove back car (exit gate 2) : " << endl;
        cout << "5. Remove car by number (middle erase) : " << endl;
        cout << "6. Display all parked cars : " << endl;
        cout << "7. Search car : " << endl;
        cout << "8.  Show total cars : " << endl;
        cout << "9.  Clear parking lot :" << endl;
        cout << "10. Exit : " << endl;
        cout << "Enter your choice : " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            // Add regular car (back)
            parking_lot.push_back("REGULAR_CAR_A");
            cout << "Regular car added.." << endl;
            break;
        case 2:
            // Add VIP car (front)
            parking_lot.push_front("VIP_CAR");
            cout << "Vip car added" << endl;
            break;
        case 3:
            // Remove front car (exit gate 1)
            cout << "Front car removed (exit gate 1) : " << parking_lot.front();
            parking_lot.pop_front();
            break;
        case 4:
            // Remove back car (exit gate 2)
            cout << "\nBack car removed (exit gate 2) : " << parking_lot.back();
            parking_lot.pop_back();
            break;
        case 5:

            // Remove car by number (middle erase)
            // cout<<"// Remove car by number (middle erase) : ";
            // parking_lot.pop("2");
            break;

        case 6:

            for (int i = 0; i < parking_lot.size(); i++)
            {
                cout << " ->  " << i << "  " << parking_lot[i] << endl;
            }
            cout << "Total size of car parked.." << endl;
            break;
        case 7:
            break;
        case 8:
            cout << "Total cars parked : " << parking_lot.size() << endl;
            break;
        case 9:
            parking_lot.clear();
            cout << "Parking lot cleared..." << endl;
        case 10:
            exit(0);
            cout << "Exiting app...";
        default:
            cout << "Invalid choice...";
        }

    } while (choice != 0);

    return 0;
}