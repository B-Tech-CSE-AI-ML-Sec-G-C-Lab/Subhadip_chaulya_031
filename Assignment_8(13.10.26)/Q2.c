/*
A university maintains student information. Student stores personal information, Marks inherits from Student and stores marks, and Result inherits from Marks and calculates the percentage and grade.

Questions:

Create a Student class containing roll number and name. 

Derive Marks from Student and store marks in three subjects. 

Derive Result from Marks. 

Calculate total and percentage. 

Display the grade using the following rules: 

Percentage ≥ 80: Grade A 

Percentage ≥ 60: Grade B 

Percentage ≥ 40: Grade C 

Otherwise: Fail
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int roll;
    string name;

public:
    void getStudentDetails() {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, name);
    }
};

class Marks : public Student {
protected:
    float m1, m2, m3;

public:
    void getMarks() {
        getStudentDetails();

        cout << "Enter marks in Subject 1: ";
        cin >> m1;

        cout << "Enter marks in Subject 2: ";
        cin >> m2;

        cout << "Enter marks in Subject 3: ";
        cin >> m3;
    }
};

class Result : public Marks {
private:
    float total, percentage;
    string grade;

public:
    void calculateResult() {
        total = m1 + m2 + m3;
        percentage = total / 3.0;

        if (percentage >= 80)
            grade = "A";
        else if (percentage >= 60)
            grade = "B";
        else if (percentage >= 40)
            grade = "C";
        else
            grade = "Fail";
    }

    void displayResult() {
        calculateResult();

        cout << "\n--- Student Result ---\n";
        cout << "Roll Number: " << roll << endl;
        cout << "Student Name: " << name << endl;
        cout << "Subject 1 Marks: " << m1 << endl;
        cout << "Subject 2 Marks: " << m2 << endl;
        cout << "Subject 3 Marks: " << m3 << endl;
        cout << "Total Marks: " << total << "/300" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Result r;

    r.getMarks();
    r.displayResult();

    return 0;
}
