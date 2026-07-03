#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(2,1);
    v.push_back(20);
    v.push_back(30);
    v.pop_back();

    for(auto i:v)
    {
        cout<<i<<" ";
    }
}