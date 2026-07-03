#include<iostream>
using namespace std;
int main()
{
    int num;;
    cout<<"Enter the Number:";
    cin>> num;
    int sum;

    while(num>0)
    {
        sum=0;
        int digit=num%10;
        sum=sum*10+digit;
        num=num/10;
    }

    cout<<sum;



}