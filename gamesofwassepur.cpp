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
        int arr[s.length()];
        for (int i = 0; i < s.length(); i++)
        {
            cin>>s[i];
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]!=s[i+1])
            {
                count++;
            }
            
        }
        if (count%2==0)
        {
            cout<<"Ramadhir"<<endl;
        }
        else
        {
            cout<<"Sahid"<<endl;
        }
        
    }
    
    return 0;
}