#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int arr[a];
    int count=0;
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    if (arr[i]+c>=b)
    {
       count++;
    }
    }
    if (count>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
        
    
    return 0;
}