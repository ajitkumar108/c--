#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,c,d,e,f;
        cin>>a>>b>>c;
        cin>>d>>e>>f;
        if (a+b+c==d+e+f)
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