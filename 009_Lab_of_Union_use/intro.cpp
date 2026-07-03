//union
    // 5
    // 2 3 9 18 5

    // 4
    // 5 9 60 4

    // 2 3 9 18 5 60 4 

#include<iostream>
using namespace std;
int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    
    int n2;
    cin>>n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }

    

    for (int i = 0; i < n1; i++)
    {
        cout<<arr1[i]<<" ";
    }
    
   
    for (int i = 0; i < n2; i++)
    {
         bool present=false;
        for (int j = 0; j < n1; j++)
        {
            if (arr2[i]==arr1[j])
            {
                present=true;
            }            
        }

        if(present==false)
        {
            cout<<arr2[i]<<" ";
        }
        
    }
    
} 
