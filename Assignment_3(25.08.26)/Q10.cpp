/*
Create a class “Student”. Take user input for roll number and marks of 5 subjects of a student. Display the total marks of the student using member functions.
*/

#include <iostream>
using namespace std;

class Student
{
    int roll;
    int marks[5];

public:
    void input()
    {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks of 5 subjects:\n";

        for(int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    int total()
    {
        int sum = 0;

        for(int i = 0; i < 5; i++)
            sum += marks[i];

        return sum;
    }

    void display()
    {
        cout << "\nRoll Number = " << roll << endl;
        cout << "Total Marks = " << total() << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}