// find x is present in array or not

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

    int check;
    cout<<"Enter the number : ";
    cin>>check;
    
    for (int  i = 0; i < size; i++)
    {
        if (check==arr[i])
        {
            cout<<"present number : "<<check;
            return 0;
        }
        
    }
    cout<<"Not present number : "<<check;
    return 0;
    
    
    

}