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
        int s=3*b-(a-b);
        if (s>=c)
        {
            cout<<"Pass"<<endl;
        }
        else
        {
            cout<<"Fail"<<endl;
        }
        
    }
    
    return 0;
}