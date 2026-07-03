//second maximum find

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int mx=arr[0];
    for (int i = 0; i < size; i++)
    {
       if(arr[i]>mx)
       {
        mx=arr[i];
       }
    }

    int second_max=INT_MIN;

    for (int i = 0; i < size; i++)
    {
       if(arr[i]!=mx)
       {
        if(arr[i]>second_max)
        {
            second_max=arr[i];
        }
       }
    }
    
    cout<<second_max;

}