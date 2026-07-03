// prime number using function

#include<iostream>
using namespace std;

int isPrime(int num)
{
    if (num==1)
    {
        return false;
    }
    

    for (int i = 2; i <= num-1; i++)
    {
        if (num%i==0)
        {
            return false;
        }        
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter the Number:";
    cin>>num;

    if(isPrime(num)==0)
    {
        cout<<"Not prime";
    }
    else
    {
        cout<<"prime";
    }

    
    
}