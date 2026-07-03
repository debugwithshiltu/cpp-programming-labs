#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }

    int target;
    cin>>target;

    int left=0, right=num-1;
    // 4 7 9 15 20
    //15
    while (left<=right)
    {
        int mid=(left+right)/2;

        if(arr[mid]==target)
        {
            cout<<mid<<endl;
            return 0;
        }
        else if(arr[mid]>target)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    


    

}