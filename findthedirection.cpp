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
        if (a==1||a%4==1)
        {
            cout<<"East"<<endl;
        }
        else if (a==2||a%4==2)
        {
            cout<<"South"<<endl;
        }
        else if (a==3||a%4==3)
        {
            cout<<"West"<<endl;
        }
        else
        {
            cout<<"North"<<endl;
        }
        
    }
    
    return 0;
}