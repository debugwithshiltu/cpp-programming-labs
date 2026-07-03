//using function factorial number
#include<iostream>
using namespace std;

int fact(int num)
{
    int factorial_number =1;
    for (int i = 1; i <= num; i++)
    {
        factorial_number=factorial_number*i;
    }
    return factorial_number;
}

int main()
{
    int num;
    cout<<"Enter the Number :";
    cin>> num;
    
    int factorial_number=fact(num);
    
    
    cout<<"factorial_number is "<<factorial_number;


}