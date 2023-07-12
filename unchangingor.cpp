#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        long long int a;
        cin>>a;
        for (int i = 0; i < 31; i++)
        {
         //  long long int t=pow(2,i);
            if (a==pow(2,i))
            {
                cout<<a-i-1<<endl;
            }
            else if(a<pow(2,i)&&a>pow(2,i-1))
            {
                cout<<a-i<<endl;
            }
            
        }
        
    }
    
    return 0;
}