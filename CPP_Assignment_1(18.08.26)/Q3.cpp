/*
swap 2 number without using 3rd varible
*/

#include<iostream>
using namespace std;
void input(int &a,int &b){
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter first number: ";
    cin>>b;
}
void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
int main(){
     int num1,num2;
     input(num1,num2);
     swap(num1,num2);
     cout<<"After swaping num1:"<<num1<<endl;
     cout<<"After swaping num2:"<<num2;

    return 0;
}