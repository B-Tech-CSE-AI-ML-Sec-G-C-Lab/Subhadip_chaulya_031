/*
check whether a number is odd or even
*/
#include<iostream>
using namespace std;
void input(int &n){
  cout<<"Enter a possitive whole number:";
  cin>>n;
}
void check(int n){
    if(n%2==0){
        cout<<"The number is even number";
    }
      cout<<"The number is odd number";
}

int main(){
int num;
input(num);

check(num);
return 0;
   
}