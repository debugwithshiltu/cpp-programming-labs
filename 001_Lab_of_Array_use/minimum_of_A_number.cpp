// find min of a number


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
        cout<<"Enter number in array : "; //[7,4,2,8]
        cin>>arr[i];
    }

    int min=arr[0];

    for (int  i = 0; i < size; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    cout<<"min is : ";
    cout<<min;
    
    

}