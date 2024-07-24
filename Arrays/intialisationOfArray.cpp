#include <iostream>
using namespace std;

void printarray(int dhawal[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << dhawal[i]<<endl;
    }
        cout<<"Printing Done";
 
}

int main()
{

    // datatype variable[size of an array];  
    //Declaration of an array
    int a[5] = {1,2,3,4,5};

    //Accessing the data of an array
    for (int i = 0; i < a[i]; i++)
    {
        cout << a[i]<<endl;
    }

            // indexes are from 0 to (n-1) where n=size of array
           // int x[15];
          // cout<<"value at index 5"<<x[0];    //can give 0 or null values
         // int array[15]={2,4};
        // // cout<<array[0];
       // printarray(array,15);
      // int arr[5];
    // printarray(arr,5);

cout<<endl;
    // int second[3]={5,6,7};
    // printarray(second,3);
    // cout<<endl;
    // cout<<"Value at index 2 is"<<second[2]<<endl;
    //indexing will start from 0  at index 0->5  ,,  at index 1->6 ,, at index 2->7

        int third[5]={1,2,3};  //it can print garbage values after 2nd indexing 
        for(int j=0;j<10;j++){
            cout<<endl<<"Value at indexing- "<<j+1<<"is"<<third[j];
        }



    cout<<endl;
    int thirdsize = sizeof(third);   //sizeof third array is 20 because it is of int datatype and for each int datatype the length is of 4 bytes so the total size will be came out 20 
    cout<<thirdsize;
}