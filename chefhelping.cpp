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
        if(x<10)
        {
            cout<<"Thanks for helping Chef!"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}