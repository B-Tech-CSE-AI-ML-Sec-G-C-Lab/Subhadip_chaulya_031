/*
1. Write a C++ program that reads seven numbers and sorts them in descending order 
*/

#include<iostream>
using namespace std;
void swap(int arr[],int a,int b){
    int  temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void sort_desending(int arr[],int n){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            swap(arr,i,j);
        }
    }
}

}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[7];
  cout<<"Enter array element: ";
  for(int i=0;i<7;i++){
    cin>>arr[i];
  }
  sort_desending(arr,7);
  cout<<"Desending order is:";
  display(arr,7);
}