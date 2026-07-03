#include<iostream>
using namespace std;
void welcome(int n)
{
    if(n==0)
    {
        return;
    }
   
    cout<<n<<endl;
    welcome(n-1);
}

int main()
{
    welcome(10);
}

//Function is calling itself is calll Recurtion...
