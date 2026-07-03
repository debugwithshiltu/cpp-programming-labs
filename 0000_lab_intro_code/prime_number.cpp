// prime number

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number:";
    cin>>num;

    if (num==1)
    {
        cout<<num <<" this number is not prime....";
    }
    

    for (int i = 2; i <= num-1; i++)
    {
        if (num%i==0)
        {
            cout<<num <<" this number is not prime....";
            return 0;
        }
        else
        {
            cout<<num <<" this number is prime....";
            return 0;
        }
        
    }
    
}