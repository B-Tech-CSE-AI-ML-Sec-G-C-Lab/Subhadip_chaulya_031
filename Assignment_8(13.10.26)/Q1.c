/*
A company stores basic employee information such as employee ID and name. A Salary class inherits this information and calculates the employee's gross salary from basic salary and allowances.

Questions:

Define a base class Employee with id and name. 

Derive a class Salary containing basic, HRA, and DA. 

Create a function to calculate gross salary. 

Accept employee details and display the complete salary information. 

Explain how inheritance reduces code duplication
*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int id;
    string name;

public:
    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
    }
};

class Salary : public Employee {
private:
    double basic, HRA, DA, grossSalary;

public:
    void getSalaryDetails() {
        getEmployeeDetails();

        cout << "Enter Basic Salary: ";
        cin >> basic;

        cout << "Enter HRA: ";
        cin >> HRA;

        cout << "Enter DA: ";
        cin >> DA;
    }

    void calculateGrossSalary() {
        grossSalary = basic + HRA + DA;
    }

    void display() {
        calculateGrossSalary();

        cout << "\n--- Employee Salary Details ---\n";
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << HRA << endl;
        cout << "DA: " << DA << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Salary s;
    s.getSalaryDetails();
    s.display();

    return 0;
}
