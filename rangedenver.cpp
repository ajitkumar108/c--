#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b;
        int count=0;
        cin>>a>>b;
        for (int i=b; i>a; i++)
        {
            if ((b-a+1)%i==0)
            {
                count++;
            }
            
        }
        cout<<count<<endl;
    }
    
    return 0;
}