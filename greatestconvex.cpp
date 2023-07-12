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
        if(a==0)
        cout<<-1<<endl;
        else if (a==1)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<a-1<<endl;
        }
        
    }
    
    return 0;
}