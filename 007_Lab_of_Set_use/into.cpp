#include<bits/stdc++.h>
using namespace std;

// set <  data_type > set_name

int main()
{
    set<int> se;
    se.insert(48);
    se.insert(1);
    se.insert(300);

    for(int x:se)
    {
        cout<<x<<" ";
    }
}
