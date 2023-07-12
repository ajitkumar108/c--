#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        cout<<a*(a+1)/2 - b<<endl;
    }
    
    return 0;
}