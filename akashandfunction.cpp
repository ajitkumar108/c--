#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        int count=0;
         for (int i = 0; i < a; i++)
         {
             if (a/(pow(2,i))>=1)
             {
                count++;
             }
             else
             {
                 break;
             }
             
         }
         cout<<a-count+1<<endl;
    }
    
    return 0;
}