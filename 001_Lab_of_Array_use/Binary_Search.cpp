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
//3 5 7 9 10     //5

    int target; cin>>target;

    int left=0;
    int  right=n-1;

    while (left<=right)
    {
        int mid=(left+right)/2;
        if (arr[mid]==target)
        {
            cout<<target<<endl;
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

// 5
// 3 5 7 9 10
// 5
// 5