#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        int b=0,c=0;
        cin>>a;
        while (a!=0)
        {
            c=a%10;
            b=b*10+c;
            a/=10;
        }
        if (a==b)
        {
            cout<<"NOT LOVELY"<<endl;
        }
        else
        {
            cout<<"LOVELY"<<endl;
        }
        
    }
    return 0;
}