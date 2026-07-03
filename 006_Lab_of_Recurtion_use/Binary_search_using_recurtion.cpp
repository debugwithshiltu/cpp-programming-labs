//Binary Search

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
//3 5 7 9 10     //16

    int target; cin>>target;

    for (int i = 0; i < n; i++)
    {
        int a=arr[i];
        int find=target-a;

        int left=i+1;
        int  right=n-1;

        while (left<=right)
        {
            int mid=(left+right)/2;
            if (arr[mid]==find)
            {
                cout<<"yes"<<endl;
                cout<<i<<" "<<mid<<endl;
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
            
    }
    cout<<"Not found";
  
}

