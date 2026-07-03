//string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="";
    cin>>s;
    string original=s;
    reverse(s.begin(),s.end());

    if(original==s)
    {
        cout<<"Palindrom";
    }
    else
    {
        cout<<"Not Palindrom";
    }    
}