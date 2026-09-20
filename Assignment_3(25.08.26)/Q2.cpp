/*
Write in C++ to find the sum of digits of a number.
*/
#include <iostream>
using namespace std;

int sumDigits(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of digits = " << sumDigits(n);

    return 0;
}