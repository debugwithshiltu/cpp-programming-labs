#include<iostream>
using namespace std;

int reverse(int num)
{
    int rev =0;
    while (num!=0)
    {
        
        int last_digit=num%10;
        rev=(rev*10)+last_digit;
        num=num/10;
    }
    return rev;
}

int main()
{
    int a;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"Original Number : "<<a<<endl
     ;
    int b=reverse(a);
    cout<<"Reverse Number : "<<b ;
}