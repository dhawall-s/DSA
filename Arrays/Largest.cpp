#include<iostream>
using namespace std;

int  largest(int arr[],int size){
    int largest=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int a[100];
    int size;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    int store=largest(a,size);
    cout<<store;



}