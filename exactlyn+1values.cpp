#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        long long int a;
        cin>>a;
        int sum=0;
        if (a>1)
        {
          
        
        for (int i = 1; i <= a-1; i++)
        {
            cout<<i<<" ";
            sum=sum+i;
        }
        cout<<a-1<<" "<<pow(2,a)-(sum+a-1)<<endl;
    }
   
    
    }

    
    return 0;
}