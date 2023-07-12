#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        int arr[s.length()];
        int sum=0;
        for (int i = 0; i <s.length(); i++)
        {
            arr[i]=s[i]-96;
        }
        sort(arr,arr+s.length());
        for (int i = 1; i <= s.length(); i++)
        {
            sum=sum+i*arr[i-1];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}