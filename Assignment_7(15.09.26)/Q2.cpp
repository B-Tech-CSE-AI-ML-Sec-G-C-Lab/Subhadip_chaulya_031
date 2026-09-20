/*
2. Write a C++ program to check whether a given length of three sides forms a right triangle. 
*/
#include<iostream>
using namespace std;
bool right_triangle(int a,int b,int c){
    if((a+b>c) && (b+c>a) && (a+c>b)){
        return true;
    }
    return false;
}
int main(){
    int a,b,c;
    cout<<"Enter 3 side of triangle:";
    cin>>a>>b>>c;
    cout<<boolalpha<<right_triangle(a,b,c);
    return 0;
}
