/*
WAP in c++ to check if it is possible to add 2 integer to get the third from three given integer
*/
#include <iostream>
using namespace std;

void input(int &a, int &b, int &c){
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
}

bool check(int a, int b, int c){
    if (a + b == c || a + c == b || b + c == a)
        return true;
    else
        return false;
}

int main(){
    int a, b, c;
    input(a, b, c);
    cout << boolalpha << check(a, b, c);
    return 0;
}