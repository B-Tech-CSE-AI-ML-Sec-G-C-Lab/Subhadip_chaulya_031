/*
Write in C++ to find perfect numbers in a range.
*/
#include <iostream>
using namespace std;

bool isPerfect(int n)
{
    int sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    return sum == n;
}

void perfectRange(int start, int end)
{
    cout << "Perfect numbers are: ";

    for(int i = start; i <= end; i++)
    {
        if(isPerfect(i))
            cout << i << " ";
    }
}

int main()
{
    int start, end;

    cout << "Enter range: ";
    cin >> start >> end;

    perfectRange(start, end);

    return 0;
}