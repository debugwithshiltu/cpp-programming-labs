// 6

// [12 9 18 5 10 11 ]

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size:";
    cin>>size;


    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    // 6

// [12 9 18 5 10 11 ]

//19
    int target;
    cout<<"Enter the target value";
    cin>>target;

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<"Yes its Possible";
                return 0;
            }
        }
        
    }
}