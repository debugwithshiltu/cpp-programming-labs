//ffactorial number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number :";
    cin>> num;
    

    int factorial_number =1;
    for (int i = 1; i <= num; i++)
    {
        factorial_number=factorial_number*i;
    }
    
    cout<<"factorial_number is "<<factorial_number;


}