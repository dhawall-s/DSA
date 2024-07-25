#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        // arr[i]=sum;

        sum=sum+arr[i];      
    }
    return sum;
}

int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0; i<size;i++){
        cin>>num[i];
    }
    cout<<"sum is"<<sum(num,size);
}