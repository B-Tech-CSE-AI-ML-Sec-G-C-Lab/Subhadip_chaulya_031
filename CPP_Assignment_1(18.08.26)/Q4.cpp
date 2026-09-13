/*
Find largest number among three number
*/
#include<iostream>
using namespace std;
void input(int &a,int &b,int &c){
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
}
void find_largest(int &a,int &b,int &c){
    if(a>b && a>c){
        cout<<"Largest number:"<<a;
    }
    else if(b>a && b>c){
        cout<<"Largest number:"<<b;
    }
    else{
        cout<<"Largest number:"<<c;
    }
}
int main(){
    int a,b,c;
    input(a,b,c);
    find_largest(a,b,c);
    return 0;
}