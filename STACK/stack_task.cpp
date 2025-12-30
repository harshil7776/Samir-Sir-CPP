// 🚨 Emergency Call Center – Call Escalation System
// This is used in real systems (call centers, incident management, DevOps on-call).
// An emergency call center works like this:
// Normal calls are handled in order
// If a critical emergency comes, it must be handled immediately
// Current handling is paused
// Paused tasks are resumed later in reverse order
// 👉 This cannot be solved properly using queue alone
// 👉 Stack is perfect because of LIFO nature
// Handle normal calls
// Interrupt with emergency calls
// Pause current handling (push to stack)
// Resume paused calls in correct order
// Display system state
// cout << "\n🚨 Emergency Call Center\n";
//         cout << "1. Start Normal Call\n";
//         cout << "2. Emergency Call Arrives\n";
//         cout << "3. Resolve Current Call\n";
//         cout << "4. Show Current Call\n";
//         cout << "5. Show Paused Calls Count\n";
//         cout << "0. Exit\n";
//         cout << "Enter choice: ";
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<string> paused_call;
    int choice;
    string current_call = "";
    while (true)
    {
        cout << "\n Emergency Call Center\n";
        cout << "1. Start Normal Call\n";
        cout << "2. Emergency Call Arrives\n";
        cout << "3. Resolve Current Call\n";
        cout << "4. Show Current Call\n";
        cout << "5. Show Paused Calls Count\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (current_call != "")
            {
                paused_call.push(current_call);
            }
            current_call = "Normal call";
            cout << "Normal call started..." << endl;
            break;
        case 2:
            if (current_call != "")
            {
                paused_call.emplace(current_call);
            }
            current_call = "Emergency call....";
            cout << "Emergency call...." << endl;
            break;

        case 3:
            if (current_call == "")
            {
                cout << "No active calls";
            }
            else
            {
                cout << "Resolved.." << current_call << endl;
            }
            break;
        case 4:
            if (current_call == "")
            {
                cout << "No active calls.." << endl;
            }
            else
            {
                cout << "Current call : " << current_call << endl;
            }
            break;
        case 5:
            cout << "Paused call : " << paused_call.size() << endl;
            break;
        case 6:
            cout << "Exiting the app...";
            exit(0);
        default:
            cout << "Invalid choice....Try Again Later...";
        }
    }
}
