#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int count=0;
    for (int i = 1; i < a; i++)
    {
        if (a%i==0)
        {
          count++;
        }
        
    }
    if (count>1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
    
    return 0;
}