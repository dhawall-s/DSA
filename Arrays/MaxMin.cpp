#include<iostream>
using namespace std;

int getMax(int arr[],int size){
    int max=INT8_MIN;
    
    for(int i=1;i<=size;i++){
        if(arr[i] > max){
            max=arr[i];
        }     
    }
    cout<<endl;
    // cout<<"Maximum element of array is"<<max;
   return max;
}

int getMin(int arr[],int size){
    int min=INT8_MAX;
    
    for(int i=1;i<=size;i++){
        if(arr[i] < min){
            min=arr[i];
        }     
    }
    cout<<endl;
    // cout<<"Maximum element of array is"<<min;
    return min;
}


int main(){
   cout<<"enter the size";
    int size;
    cin >>size;

    //This not a good practice for intitialising the arrays
    // int num[size];
    
    int num[100];
    
    //taking input in arrays
    for(int i=1;i<=size;i++){
        cin>>num[i];
    }
   cout<<"Array elements are :";
   cout<<endl;

   for(int i=1;i<=size;i++){
    cout<<num[i]<< " ";
   }
   cout<<endl;

//    getMax(num,size);

   cout<<"Maximum element is "<<getMax(num,size)<<endl;
   cout<<"Minimum element is "<<getMin(num,size)<<endl;
}


// enter the size of the arrays: 5
// 18
// 45
// 7
// 66
// 97
// Array elements are :
// 18 45 7 66 97 

// Maximum element is 97

// Minimum element is 7