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
        if (a%2!=0)
        {
        
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                if (i==j)
                {
                    cout<<-1<<" ";
                }
                else
                {
                    cout<<1<<" ";
                }
            }
            cout<<"\n";
        }
        }
        else
        {
             for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout<<-1;
            }
            cout<<"\n";
            }
            
        }
        
    }
    
    return 0;
}