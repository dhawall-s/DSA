#include<iostream>
using namespace std;
void alternateswap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
        
    }
}
int main(){
int size;
cout<<"Enter the Size of an array:";
cin>>size;
cout<<endl;
int num[100];
for(int i=0;i<size;i++){
    cin>>num[i];
}
cout<<"You Have entered the following elements"<<endl;
for(int i=0;i<size;i++){
    cout<<num[i]<<endl;
}
alternateswap(num,size);
for(int i=0;i<size;i++){
    cout<<num[i];
}
}