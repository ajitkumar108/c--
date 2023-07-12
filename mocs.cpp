#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        int arr[a];
        int i;
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a);
        if (arr[a-1]>=80)
        {
            cout<<"BANNED"<<endl;
        }
        else if (arr[a-1]<80&&arr[a-1]>=60)
        {
           cout<<"PLAGIARISED -275"<<endl;
        }
        else
        {
            cout<<"COINCIDENCE"<<endl;
        }
        
    }
    
    return 0;
}