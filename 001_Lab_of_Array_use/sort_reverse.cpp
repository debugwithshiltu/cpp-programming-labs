// reverse array

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[size];

    for (int  i = 0; i < size; i++)
    {
        cout<<"Enter number in array : "; //[7,4,2,8,2,2]
        cin>>arr[i];
    }
    
    reverse(arr,arr+size);
    sort(arr,arr+size);
    
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    
    
    

}