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
        string s;
        cin>>s;
        int count=0;
        int temp=0;
        for (int i = 0; i < a; i++)
        {
            if (s[i]=='0')
            {
                count++;
            }
            else
            {
                temp++;
            }
        }
        int p=(b*count)+(c*temp);
        cout<<p<<endl;
    }
    
    return 0;
}