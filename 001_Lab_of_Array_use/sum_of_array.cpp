#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[size];

    for (int  i = 0; i < size; i++)
    {
        cout<<"Enter number in array : ";
        cin>>arr[i];
    }

    int total=0;

    for (int  i = 0; i < size; i++)
    {
        total=total+arr[i];
    }
    cout<<"Sum of the array is : ";
    cout<<total;
    
    

}