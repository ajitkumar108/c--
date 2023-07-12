#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int arr[a],arr1[a];
        int count=0;
        for (int i = 0; i <a; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < a; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < a; i++)
        {
           if(abs(arr[i]-arr1[i])<=c)
           {
           count++;
           }
        }
        if(count>=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}