#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    vector<int> ve;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        ve.push_back(arr[i]);
    }
   sort(ve.begin(),ve.end());
    for(auto x:ve)
    {
        cout<<x<<" ";
    }



    
    
}
