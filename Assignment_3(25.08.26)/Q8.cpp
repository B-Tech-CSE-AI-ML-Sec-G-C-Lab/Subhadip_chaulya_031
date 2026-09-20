/*
Create a class “Car” and accept the details of a car for its id and price. Display the details of 2 such car objects.
*/
#include <iostream>
using namespace std;

class Car
{
    int id;
    float price;

public:
    void input()
    {
        cout << "Enter car ID: ";
        cin >> id;

        cout << "Enter car price: ";
        cin >> price;
    }

    void display()
    {
        cout << "Car ID: " << id << endl;
        cout << "Car Price: " << price << endl;
    }
};

int main()
{
    Car c[2];

    for(int i = 0; i < 2; i++)
    {
        cout << "\nEnter details of Car " << i + 1 << endl;
        c[i].input();
    }

    cout << "\nCar Details\n";

    for(int i = 0; i < 2; i++)
    {
        c[i].display();
    }

    return 0;
}