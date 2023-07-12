#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        int count=0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')
            {
               count++;
            }
            else if (s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1')
            {
                count++;
            }
        }
        if (count>0)
        {
            cout<<"Good"<<endl;
        }
        else
        {
            cout<<"Bad"<<endl;
        }
        
    }
    
    return 0;
}