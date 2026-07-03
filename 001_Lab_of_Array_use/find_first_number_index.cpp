// find first index of element x in array

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
        cout<<"Enter number in array : "; //[7,4,2,8,2,2]
        cin>>arr[i];
    }

    int check;
    cout<<"Enter the number : ";
    cin>>check;
    
    for (int  i = 0; i < size; i++)
    {
        if (check==arr[i])
        {
            cout<<"present address : "<<i;
            return 0;
        }
        
    }
    cout<<"Not present number : "<<check;
    return 0;
    
    
    

}