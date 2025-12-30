#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack<string> actions;
    actions.push("Typed : Hello");
    actions.push("Typed : World");
    actions.emplace("Deleted : World");
    actions.push("Typed : C++");

    cout << "\nLast Action : " << actions.top() << endl;
    // last remove
    actions.pop(); // remove last action

    cout << "\nNow Last Action : " << actions.top() << endl;

    // total actions
    cout << "Total actions : " << actions.size() << endl;

    // loop for auto
    while (!actions.empty())
    {
        cout << "--->UNDO" << actions.top() << endl;
        actions.pop();
    }

    cout << "Can I Do More Undo?" << (actions.empty() ? " NO" : " YES") << endl;

    return 0;
}