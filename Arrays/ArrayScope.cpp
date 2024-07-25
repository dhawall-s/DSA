#include<iostream>
using namespace std;

void update(int arr[],int size){
    //Array ne apna base address update function ko de diya so jo bhi apn change karenge update func mein voh array mein bhi reflect karega
    // we are not providing the copy of an array so it is updating at the actual base adddress of an array so we should avoid the updation of arrays in the function
    arr[0]=180;
cout<<"Printing the Array elements in the Update Function";
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    cout<<"Going Back To Main Function";

}

int main(){
    int size;
    int arr[3]={1,2,3};
    update(arr,3);

    cout<<endl;
    cout<<"Printing Arrays elements in the Main Function"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<" "<<arr[i];
    }

}