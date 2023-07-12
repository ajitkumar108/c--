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
        int sum=0;
        for (int i = 0; i < a-1; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if (a*b>=sum)
        {
            cout<<a*b-sum<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
    
    return 0;
}