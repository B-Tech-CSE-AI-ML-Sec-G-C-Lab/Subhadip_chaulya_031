/*
Wap in c++ to add two numbers
*/

#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
void input(int &a,int &b){
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter first number: ";
    cin>>b;
}
int main(){
    int num1,num2;
    input(num1,num2);
    int ans=sum(num1,num2);
    cout<<"Answer="<<ans<<endl;
    return 0;
}