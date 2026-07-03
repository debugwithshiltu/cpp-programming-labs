#include<iostream>
using namespace std;
int main()
{
    //taking input in string
    string s;
    cout<<"Enter the text: ";
    cin>>s;
    
    //taking key values
    cout<<"Enter the Key: ";
    int key; cin>>key;

    char newchar;// for singal digit change
    string ans=""; // for storing the value for concadinate

    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch>='A' && ch<='Z')
        {
            newchar=(char)(((ch-'A'+key)%26)+'A');
            ans+=newchar;
        }
        else if(ch>='a' && ch<='z')
        {
            newchar=(char)(((ch-'a'+key)%26)+'a');
            ans+=newchar;
        }
        else if(ch>='0' && ch<='9')
        {
            newchar=(char)(((ch-'0'+key)%26)+'0');
            ans+=newchar;
        }
        else
        {
            cout<<"No";
        }

    }
    cout<<ans<<endl;

    
}