// find last index of element x in array

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
    
    int location = 0;
    for (int  i = 0; i < size; i++)
    {
        if (check==arr[i])
        {
            location =i;
        }
        
    }
    cout<<"present address : "<<location;
    return 0;
    
    
    

}