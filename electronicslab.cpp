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
        if (a>=-20&&a<-7)
        {
        cout<<"Insulator"<<endl;
        }
        else if (a>=-7&&a<4)
        {
            cout<<"Semiconductor"<<endl;
        }
        else
        {
            cout<<"Conductor"<<endl;
        }
        
    }
    
    return 0;
}