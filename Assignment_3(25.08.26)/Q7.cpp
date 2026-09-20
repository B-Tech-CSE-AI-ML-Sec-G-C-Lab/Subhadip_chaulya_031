/*
Create a class “Book” and calculate the Volume of a Book using member variables and functions.
*/
#include <iostream>
using namespace std;

class Book
{
    float length, width, height;

public:
    void input()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

        cout << "Enter height: ";
        cin >> height;
    }

    float volume()
    {
        return length * width * height;
    }
};

int main()
{
    Book b;

    b.input();

    cout << "Volume of Book = " << b.volume();

    return 0;
}