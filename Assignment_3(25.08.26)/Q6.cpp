/*
Write in C++ to check if a number is a Strong number.
*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

bool isStrong(int n)
{
    int original = n;
    int sum = 0;

    while(n > 0)
    {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    return sum == original;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(isStrong(n))
        cout << "Strong number";
    else
        cout << "Not a Strong number";

    return 0;
}