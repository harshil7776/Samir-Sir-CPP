#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <list>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    queue<pair<int, string>> incomingOrders;
    stack<pair<int, string>> failedPayments;
    list<pair<int, string>> completedOrders;
    map<string, int> salesCounnt;

    incomingOrders.push({1, "Laptop"});
    incomingOrders.push({2, "Mobile"});
    incomingOrders.push({3, "Headphone"});
    incomingOrders.push({4, "Mobile"});
    incomingOrders.push({5, "Laptop"});

    // orders processing
    while (!incomingOrders.empty())
    {
        auto order = incomingOrders.front();
        incomingOrders.pop();

        // sucess and fail simulate
        if (order.first % 2 == 0)
        {
            completedOrders.push_back(order);
            salesCounnt[order.second]++;
        }
        else
        {
            failedPayments.push(order);
        }
    }

    for (auto o : completedOrders)
    {

        cout << o.first << "----" << o.second << endl;
    }

    // retry failed orders
    while (!failedPayments.empty())
    {

        auto order = failedPayments.top(); // lifo
        failedPayments.pop();

        completedOrders.push_back(order);
        salesCounnt[order.second]++;
    }

    cout << "\nCompleted orders : " << endl;

    for (auto o : completedOrders)
    {

        cout << o.first << "----" << o.second << endl;
    }

    // analysis
    auto mostSold = max_element(salesCounnt.begin(), salesCounnt.end(), [](auto a, auto b)
                                { return a.second < b.second; });

    cout << "\nMost sold products = " << mostSold->first << "----" << mostSold->second;
}