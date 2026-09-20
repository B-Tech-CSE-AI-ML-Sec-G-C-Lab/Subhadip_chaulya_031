/*
An exam department in a college wants to store student data. They want to create student object directly with marks, and also create a duplicate record for backup using copy.

a)Create a class Student with roll, name, and marks

b)Use parameterized constructor to initialize the data

c)Use Copy constructor to clone a student
*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float marks;

public:
    // Parameterized constructor
    Student(int r, string n, float m)
    {
        roll = r;
        name = n;
        marks = m;
    }

    // Copy constructor
    Student(const Student &s)
    {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }

    // Display student details
    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Create original student object
    Student s1(101, "Rahul", 85.5);

    cout << "Original Student:" << endl;
    s1.display();

    // Create duplicate using copy constructor
    Student s2(s1);

    cout << "\nCopied Student:" << endl;
    s2.display();

    return 0;
}