#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int p;
        cin>>p;
        if(p==0||p%7==0)
        {
            cout<<"sunday"<<endl;
        }
        else if(p==1||p%7==1)
        {
            cout<<"monday"<<endl;
        }
        else if(p==2||p%7==2)
        {
            cout<<"tuesday"<<endl;
        }
        else if(p==3||p%7==3)
        {
            cout<<"wednesday"<<endl;
        }
        else if(p==4||p%7==4)
        {
            cout<<"thursday"<<endl;
        }
        else if(p==5||p%7==5)
        {
            cout<<"friday"<<endl;
        }
        else
        {
            cout<<"saturday"<<endl;
        }
    }
    
    return 0;
}