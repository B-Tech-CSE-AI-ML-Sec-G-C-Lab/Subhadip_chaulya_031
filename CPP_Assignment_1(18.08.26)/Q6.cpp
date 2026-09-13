/*
WAP in c++ to check if 2 given integer ,and return true if one of them is 30 or if their sum is 30
*/
#include<iostream>
using namespace std;
void input(int &a,int &b){
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
}
bool check(int &a,int &b){
    if(a==30 || b==30 || a+b==30){
        return true;
    }
    return false;
}
int main(){
     int num1,num2;
    input(num1,num2);
    cout<<boolalpha<<check(num1,num2);
    return 0;
}