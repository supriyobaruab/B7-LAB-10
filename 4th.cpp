#include <iostream>
using namespace std;

struct Grocery
{
    int item;
    int price;
    int sale;
};

Grocery items[6];

int main()
{
    int totalSales = 0;

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter details for item " << i + 1 << ":" << endl;
        cout << "How many items were sold this month? ";
        cin >> items[i].item;
        cout << "What was the price of that item? ";
        cin >> items[i].price;

        items[i].sale = items[i].item * items[i].price;
        totalSales += items[i].sale;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "Total sale for item " << i + 1 << ": " << items[i].sale << endl;
        cout << "--------------------------" << endl;
    }

    cout << "Total sales for all items: " << totalSales << endl;

    return 0;
}
