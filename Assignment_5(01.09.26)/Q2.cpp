/*
Design BankAccount class where account holder and balance are set via parameterized constructor. The interest rate is same for all accounts, so make it static. Create a static function to change interest rate.
*/
#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    float balance;

    static float interestRate;

public:
    // Parameterized constructor
    BankAccount(string name, float bal)
    {
        accountHolder = name;
        balance = bal;
    }

    // Static function to change interest rate
    static void changeInterestRate(float rate)
    {
        interestRate = rate;
    }

    void display()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Initialize static variable
float BankAccount::interestRate = 5.0;

int main()
{
    BankAccount b1("Rahul", 50000);
    BankAccount b2("Amit", 75000);

    cout << "Before Changing Interest Rate:" << endl;
    b1.display();
    cout << endl;
    b2.display();

    BankAccount::changeInterestRate(7.5);

    cout << "\nAfter Changing Interest Rate:" << endl;
    b1.display();
    cout << endl;
    b2.display();

    return 0;
}