
// METHOD 1
// #include<iostream>
// using namespace std;



// int reverse(int arr[], int size){
//     for(int i=size-1; i>=0 ; i--)
//     {
//         cout<<arr[i];
//     }
// }

// int main(){
//     int size;
//     cin>>size;
//     cout<<endl;
//     int num[100];
    
//     for(int i=0;i<size;i++){
//         cin>>num[i];
//     }
//     cout<<endl;

    
//     for(int i=0;i<size;i++){
//         cout<<num[i]<<endl;
//     }

//      reverse(num,size);

    
// }



// METHOD 2

#include<iostream>
using namespace std;
#include<algorithm>
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }   
}
int main(){
    int size;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    cout<<endl;
    reverse(num,size);
    cout<<"Reverse array is::";
     for (int i = 0; i < size; i++) {
        cout << num[i] << " "; 
    }
    
}