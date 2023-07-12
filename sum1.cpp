#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
     int a,b,c,d;
     cin>>a>>b>>c>>d;
    int arr[i]={a,b,c,d};
     
     if (arr[i]+arr[i+2]==180 && arr[i+1]+arr[i+3]==180)
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