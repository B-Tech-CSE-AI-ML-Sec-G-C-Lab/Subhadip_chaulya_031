/*
Create a class Car with model and price. Use parameterized constructor to initialize them. Use a static variable totalCars to count how many Car objects are created. Also add a static function showTotal().
*/
#include <iostream>
using namespace std;

class Car
{
private:
    string model;
    float price;

    static int totalCars;

public:
    // Parameterized constructor
    Car(string m, float p)
    {
        model = m;
        price = p;
        totalCars++;
    }

    // Static function
    static void showTotal()
    {
        cout << "Total Cars Created: " << totalCars << endl;
    }

    void display()
    {
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
};

// Initialize static variable
int Car::totalCars = 0;

int main()
{
    Car c1("BMW", 5000000);
    Car c2("Audi", 6000000);
    Car c3("Mercedes", 7000000);

    c1.display();
    cout << endl;

    c2.display();
    cout << endl;

    c3.display();
    cout << endl;

    Car::showTotal();

    return 0;
}