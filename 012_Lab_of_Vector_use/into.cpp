
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // 1. vector<data_type> vector_name; 
    vector<int> n1;
    
    // 2. vector<data_type> vector_name(size); 
    vector<int> n2(10);

    // 3. vector<data_type> vector_name(size,element); 
    vector<int> n3(4,34);

    // 4. vector<data_type> vector_name(size,element); 
    vector<int> n4(4,9);

    //1
    cout<<n1.size()<<endl;
    //2
    cout<<n2.size()<<endl;
    //3
    for (int i = 0; i < n3.size(); i++)
    {
        cout<<n3[i]<<" ";
    }
    cout<<endl;
    //4
    for(int i:n4)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //5 type
    vector<int> n5(4,9);
    n5[0]=203;
    n5[1]=2022;
    n5[2]=200;
    n5[3]=205;
    
    for(auto i:n5)
    {
        cout<<i<<" ";
    }
    
    

}
