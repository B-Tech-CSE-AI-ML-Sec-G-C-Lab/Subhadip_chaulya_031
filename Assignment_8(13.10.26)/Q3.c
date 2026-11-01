/*
A bank maintains common customer information. Account stores account number and customer name. Two classes, SavingsAccount and CurrentAccount, inherit from Account and implement different interest/transaction rules.

Questions:
Create a base class Account. 
Derive SavingsAccount and CurrentAccount. 
In SavingsAccount, calculate interest at 5%. 
In CurrentAccount, calculate a transaction charge of ₹100. 
Display the details for both account types.
*/
#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    int accountNumber;
    string customerName;

public:
    void getAccountDetails() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cin.ignore();
        cout << "Enter Customer Name: ";
        getline(cin, customerName);
    }

    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
    }
};

class SavingsAccount : public Account {
private:
    double balance, interest;

public:
    void getSavingsDetails() {
        getAccountDetails();

        cout << "Enter Account Balance: ";
        cin >> balance;
    }

    void displaySavingsDetails() {
        interest = balance * 5 / 100.0;

        cout << "\n--- Savings Account ---\n";
        displayAccountDetails();
        cout << "Balance: Rs. " << balance << endl;
        cout << "Interest at 5%: Rs. " << interest << endl;
        cout << "Balance After Interest: Rs. "
             << balance + interest << endl;
    }
};

class CurrentAccount : public Account {
private:
    double balance, transactionCharge;

public:
    void getCurrentDetails() {
        getAccountDetails();

        cout << "Enter Account Balance: ";
        cin >> balance;
    }

    void displayCurrentDetails() {
        transactionCharge = 100;

        cout << "\n--- Current Account ---\n";
        displayAccountDetails();
        cout << "Balance: Rs. " << balance << endl;
        cout << "Transaction Charge: Rs. "
             << transactionCharge << endl;
        cout << "Balance After Charge: Rs. "
             << balance - transactionCharge << endl;
    }
};

int main() {
    SavingsAccount s;
    CurrentAccount c;

    cout << "Enter Savings Account Details:\n";
    s.getSavingsDetails();
    s.displaySavingsDetails();

    cout << "\nEnter Current Account Details:\n";
    c.getCurrentDetails();
    c.displayCurrentDetails();

    return 0;
}
