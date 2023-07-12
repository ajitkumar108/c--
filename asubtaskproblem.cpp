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
        int arr[a];
        int sum=0,count=0;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
         if (sum==a)
         {
            cout<<"100"<<endl;
         }
        else{
        for (int i = 0; i < b; i++)
        {
            if (arr[i]==1)
            {
               count++;
            }
        }
        if (count==b)
        {
            cout<<"50"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        
        } 
        
    }
    
    return 0;
}