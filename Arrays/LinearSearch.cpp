#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            // cout<<"true";
            return 1;
        }
       
    }
    return 0;
}

int main()
{
    int size;
    cout << "Enter the Size of an Array";
    cin >> size;
    cout << endl;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    int key;
    cout << "enter the element to search";
    cin >> key;
    bool find = search(num, size, key);
    // cout<<"element present "<<search(num,size,key);
    if (find)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is absent" << endl;
    }
}