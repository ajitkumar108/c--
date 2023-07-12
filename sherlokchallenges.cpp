#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        string st;
        cin>>st;
        int s=0,h=0,e=0,r=0,l=0,o=0,c=0,k=0;
        for (int i = 0; i < a; i++)
        {
            if(st[i]=='s')s++;
            else if(st[i]=='h')h++;
            else if(st[i]=='e')e++;
            else if(st[i]=='r')r++;
            else if(st[i]=='l')l++;
            else if(st[i]=='o')o++;
            else if(st[i]=='c')c++;
            else if(st[i]=='k')k++;
        }
         int p=0;
        while(s>p && h>p && e>p && r>p && l>p && o>p && c>p && k>p )
        p++;
        
        cout<<p<<endl;
    }
    
    return 0;
}