/*
Write in C++ to find whether a number is perfect or not.
*/
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n < 2)
        return false;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(isPrime(n))
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}