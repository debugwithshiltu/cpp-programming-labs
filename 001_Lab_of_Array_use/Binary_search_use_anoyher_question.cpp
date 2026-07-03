//Binary Search

#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
//0 0 0 1 1 1 1 1

    int target=1;

    int left=0;
    int  right=n-1;

    while (left<=right)
    {
        int mid=(left+right)/2;
        if ((arr[mid]==target)&&((arr[mid-1]==0)))
        {
            cout<<mid<<endl;
            return 0;
        }
        else if (arr[mid]>=target)
        {
            right=mid-1;
        }
        else if(arr[mid]<=target)
        {
            left=mid+1;
        }        
    }
    cout<<"Not found";
    
    
}

