#include <iostream>
using namespace std;
struct bank
{
    int balance;
    int year;
    float interest;
} user1;
int main()
{
    user1.balance = 100000;
    user1.year = 6;
    user1.interest = 0.065;
    for (int i = 1; i <= user1.year; i++)
    {
        user1.balance += (user1.balance * user1.interest);
        cout << "Total Balance of year " << i << " :" << user1.balance << endl;
    }

    return 0;
}