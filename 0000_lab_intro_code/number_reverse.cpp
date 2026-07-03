//Number Reverse

#include <iostream>
using namespace std;
int main()
    {
        int num;
        cout<<"Enter the Number:";
        cin>>num;
        cout<<"Original Number:"<<num<<endl;
        int new_number=0;
        
        
        while(num>0)
        {           
            int last_digit=num%10;
            new_number=(new_number*10)+last_digit;
            num=num/10;  
            
            
        
        }cout<<"Reverse Number:"<<new_number<<endl;

    }
