#include <iostream>
using namespace std;

struct date
{
    short int dd, mm, yy;
} join_date = {19, 12, 2006};

int main()
{
    date *date_ptr;
    date_ptr = &join_date;

    cout << "Printing the structure elements using the structure variable:" << endl;
    cout << "dd = " << join_date.dd << ", mm = " << join_date.mm << ", yy = " << join_date.yy << endl;

    cout << "Printing the structure elements using the structure pointer:\n";
    cout << "dd = " << date_ptr->dd << ", mm = " << date_ptr->mm << ", yy = " << date_ptr->yy << endl;

    return 0;
}
