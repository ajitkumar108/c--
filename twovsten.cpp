#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        if (x%10==0)
        {
            cout<<"0"<<endl;
        }
        else if ((2*x)%10==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }   
    }    
    return 0;
}