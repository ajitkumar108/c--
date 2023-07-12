#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        int sum=0;
        /*for (int i = 0; i < s.length(); i++)
        {
            cin>>s[i];
        }
        */
       int count=0;
        sort(s.begin(),s.end(),greater<char>());
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='1')
            {
            sum=sum+pow(2,s.length()-(i+1));
            continue;
            }
        }
       
        cout<<sum<<endl;
    }
    
    return 0;
}