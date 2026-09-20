/*
An online store wants to create products with ID, name, price. For creating similar product variants, it wants to copy an existing product and just change the price.

Create class Product with both constructors

Display the ID, name and price of the copied object before and after changing the price.
*/

#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int id;
    string name;
    float price;

public:
    // Parameterized constructor
    Product(int i, string n, float p)
    {
        id = i;
        name = n;
        price = p;
    }

    // Copy constructor
    Product(const Product &p)
    {
        id = p.id;
        name = p.name;
        price = p.price;
    }

    // Function to change price
    void changePrice(float newPrice)
    {
        price = newPrice;
    }

    // Display product details
    void display()
    {
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    // Create original product
    Product p1(101, "Laptop", 50000);

    // Copy the product
    Product p2(p1);

    cout << "Copied Product Before Price Change:" << endl;
    p2.display();

    // Change only the price of copied product
    p2.changePrice(55000);

    cout << "\nCopied Product After Price Change:" << endl;
    p2.display();

    return 0;
}