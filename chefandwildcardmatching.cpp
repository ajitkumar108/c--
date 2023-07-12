#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string X,Y;
        cin>>X>>Y;
        int flag=1;
        for(int i=0;i<X.length();i++)
        {
            if(X[i]==Y[i]||X[i]=='?'||Y[i]=='?')
            {
                flag=1;
                continue;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        if(flag==0)
        {
            cout<<"No"<<endl;
        }
        
    }
    
    
    return 0;
}