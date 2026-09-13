/*
WAP in c++ to find the absolute difference between n &51 if n is greater than 51 ,return triple the difference
*/
#include<iostream>
using namespace std;
void input(int &n){
  cout<<"Enter a possitive whole number:";
  cin>>n;
}
int difference(int &n){
    int diff;
    if(n>51){
        diff=n-51;
        return diff*3;
    }
    return (51-n);
}
int main(){
int num;
input(num);
cout<<"Result="<<difference(num);
return 0;
   
}