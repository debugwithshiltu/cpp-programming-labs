//count vowels
#include<iostream>
#include<string>
using namespace std;
int count_vowels(string s)
{
    int count=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            cout<<s[i]<<" ";
        }
    }
    return count;
    
}
int main()
{
    string s;
    cin>>s;
    cout<<count_vowels(s);
}