/*
Create a class “Employee”. Take user input for salary and allowance of 3 employees and display these using array of objects.
*/

#include <iostream>
using namespace std;

class Employee
{
    float salary, allowance;

public:
    void input()
    {
        cout << "Enter salary: ";
        cin >> salary;

        cout << "Enter allowance: ";
        cin >> allowance;
    }

    void display()
    {
        cout << "Salary = " << salary << endl;
        cout << "Allowance = " << allowance << endl;
    }
};

int main()
{
    Employee e[3];

    for(int i = 0; i < 3; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        e[i].input();
    }

    cout << "\nEmployee Details\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        e[i].display();
    }

    return 0;
}