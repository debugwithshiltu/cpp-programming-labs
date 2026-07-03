//uncomplit... code


#include<iostream>
using namespace std;

int number_power(int n,int p)
{
    if(p==0)
    {
        return;
    }
    return n*number_power(p-1);
}
//2 3 =8
int main()
{
    cout<<"Enter the Number:"<<endl;
    int n;cin>>n;
    cout<<"Enter the power:"<<endl;
    int p;cin>>p;
   
    cout<<number_power(n,p);
}