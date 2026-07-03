#include<iostream>
using namespace std;
void welcome(int n)
{
    if(n==0)
    {
        return;
    }
   
    
    welcome(n-1);
    cout<<"n = "<<n<<endl;
}

int main()
{
    welcome(10);
}

//Function is calling itself is calll Recurtion...
