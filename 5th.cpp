#include <iostream>

using namespace std;

struct Subject
{
    int cr;
    double gpa;
};

int main()
{
    int n;

    cout << "Enter the number of subject= ";
    cin >> n;

    Subject sub[n];
    int totcr = 0;
    double ttgpa = 0.0;

    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Enter details for Subject " << (i + 1) << "-->";
        cout << endl
             << "Credit Hours= ";
        cin >> sub[i].cr;
        cout << "Grade Point= ";
        cin >> sub[i].gpa;
        if (sub[i].gpa < 0 || sub[i].gpa > 4)
        {
            cout << " invalid input ";
            return 0;
        }

        totcr += sub[i].cr;
        ttgpa += sub[i].cr * sub[i].gpa;
    }

    double cgpa = ttgpa / totcr;

    cout << endl
         << "Semester GPA= " << cgpa << endl;

    return 0;
}
