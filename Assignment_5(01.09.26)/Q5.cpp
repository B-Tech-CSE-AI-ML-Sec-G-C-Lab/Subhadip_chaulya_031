/*
A company stores an employee’s basic salary and bonus as private members. The payroll department needs to calculate the total salary. Use friend function in C++ to calculate and display the total salary.
*/
#include <iostream>
using namespace std;

class Employee
{
private:
    float basicSalary;
    float bonus;

public:
    Employee(float basic, float b)
    {
        basicSalary = basic;
        bonus = b;
    }

    // Friend function
    friend void calculateTotalSalary(Employee e);
};

// Friend function definition
void calculateTotalSalary(Employee e)
{
    float totalSalary = e.basicSalary + e.bonus;

    cout << "Basic Salary: " << e.basicSalary << endl;
    cout << "Bonus: " << e.bonus << endl;
    cout << "Total Salary: " << totalSalary << endl;
}

int main()
{
    Employee e(40000, 5000);

    calculateTotalSalary(e);

    return 0;
}