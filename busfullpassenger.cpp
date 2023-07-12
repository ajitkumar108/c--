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
        int x=0,y=0;
        int flag=0;
        while (c--)
        {
            char p;
            int q;
            cin>>p>>q;
            if(p=='+')
            {
                x+=q;
            }
            else
            {
                y+=q;
            }
            if (x>b)
            {
                flag=1;
                break;
            }
            
        }
        if (flag)
        {
            cout<<"Inconsistent"<<endl;
        }
        else
        {
            cout<<"Consistent"<<endl;
        }
        
        
    }
    return 0;
}