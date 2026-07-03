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

    multiset<int> se;

    for (int i = 0; i < n; i++)
    {
        se.insert(arr[i]);
    }

    for(auto x:se)
    {
        cout<<x<<" ";
    }
    

}
