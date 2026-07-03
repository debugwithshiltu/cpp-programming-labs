#include<iostream>
using namespace std;
int main()
{
    //taking input in string
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //taking key values
    cout<<"Enter the Key: ";
    int k; cin>>k;

    int lsum=0;
    int rsum=0;
    for(int i=0;i<k;i++)
    {
        lsum+=arr[i];
    }
    
    int left=k-1;
    int right=n-1;
    int maxi=lsum+rsum;


    
    while(left>=0)
    {
        lsum-=arr[left];
        rsum+=arr[right];
        maxi=lsum+rsum;
        left--;
        right--;
    }

    cout<<maxi;
    
}