#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    while (n--)
    {
    int a;
    cin>>a;
    if (a/2+a/4+a/3>=a)
    {
     cout<<a/2+a/4+a/3<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
    
    }
    return 0;
}