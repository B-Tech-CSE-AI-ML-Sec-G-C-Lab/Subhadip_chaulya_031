/*
WAP in c++to check if it a 2 given non negetive integer to have the same last digit
*/
#include <iostream>
using namespace std;

void input(int &a, int &b){
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

bool check(int a, int b){
    if (a % 10 == b % 10)
        return true;
    else
        return false;
}

int main(){
    int a, b;
    input(a, b);
    cout << boolalpha << check(a, b);
    return 0;
}