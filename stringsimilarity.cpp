#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int p=a.length();
        int k=b.length();
        int count=0;
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<k;j++)
            {
                if(a[i]==b[j])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            cout<<"not similar"<<endl;
        }
        else
        {
            cout<<"Similar"<<endl;
        }
    }
   return 0;
}