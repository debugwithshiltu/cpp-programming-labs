#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> se;
    se.insert(50);
    se.insert(44);
    se.insert(540);

    for(int x:se)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    se.erase(12);
    for(int x:se)
    {
        cout<<x<<" ";
    }


}
