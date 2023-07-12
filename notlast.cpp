#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int z=n/10;
    if (z%10==7)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    
    return 0;
}