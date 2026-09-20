/*
A bank wants to create a new account with initial balance. When a joint account is needed, it should copy details from existing account.

Use parameterized constructor to initialize the account holder name and balance amount

Implement copy constructor for joint account holder

Implement a “deposit()” function to change the copied object
*/

#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string name;
    float balance;

public:
    // Parameterized constructor
    Account(string n, float b)
    {
        name = n;
        balance = b;
    }

    // Copy constructor
    Account(const Account &a)
    {
        name = a.name;
        balance = a.balance;
    }

    // Deposit function
    void deposit(float amount)
    {
        balance = balance + amount;
    }

    // Display account details
    void display()
    {
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    // Create original account
    Account a1("Subhadip", 10000);

    cout << "Original Account:" << endl;
    a1.display();

    // Create joint account using copy constructor
    Account a2(a1);

    cout << "\nCopied Joint Account:" << endl;
    a2.display();

    // Deposit money into copied account
    a2.deposit(5000);

    cout << "\nAfter Deposit in Joint Account:" << endl;
    a2.display();

    return 0;
}