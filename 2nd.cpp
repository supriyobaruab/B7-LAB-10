#include <iostream>
using namespace std;
struct employee
{
    int ID;
    string name;
    int experience;
    int yearlyIncrement; // 5%
    int basicSalary;
    int age;
} employee1;
int main()
{
    cout << "Enter the empoloyee ID :";
    cin >> employee1.ID;
    cout << "Name :";
    cin >> employee1.name;
    cout << "Year of experience :";
    cin >> employee1.experience;
    cout << "Basic salary :";
    cin >> employee1.basicSalary;
    employee1.yearlyIncrement = 0.05 * employee1.basicSalary;
    cout << "Age :";
    cin >> employee1.age;

    // showing the output
    cout << endl
         << "Showing details" << endl;
    cout
        << "ID of the empoloyee :" << employee1.ID << endl;
    cout << "Name of the empoloyee :" << employee1.name << endl;
    cout << "Experience of the empoloyee :" << employee1.experience << endl;
    cout << "Yearly Increment of the empoloyee :" << employee1.yearlyIncrement << endl;
    cout << "Basic salary of the empoloyee :" << employee1.basicSalary << endl;
    cout << "Age of the empoloyee :" << employee1.age << endl;

    return 0;
}