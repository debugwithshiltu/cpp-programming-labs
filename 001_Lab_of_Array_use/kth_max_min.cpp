// kth min and max element

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
    
    sort(arr,arr+size);
    
    int k; cin>>k;

    cout<<"kth min="<<arr[k-1]<<endl;
    cout<<"kth max="<<arr[size-k]<<endl;

    
    
    
    

}