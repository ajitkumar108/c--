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
    int arr[a];
    int t;
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
        arr[i]+=t;
    }
        if (t%b==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<t%b<<endl;
        }
        
    }
    
    return 0;
}