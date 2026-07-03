//sum of Digit
#include<iostream>
using namespace std;

int reverse(int num)
{
    int sum=0;
    while (num!=0)
    {
        
        int last_digit=num%10;
        sum=sum+last_digit;
        num=num/10;
    }
    return sum;
}

int main()
{
    int a;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"Original Number : "<<a<<endl;
    int b=reverse(a);
    cout<<"Sum of Digit is : "<<b ;
}