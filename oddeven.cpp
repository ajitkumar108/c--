#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n%3!=0)
    {
        cout<<"-1"<<endl;
    }
    else if (n%3==0&&n%2!=0)
    {
       cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    
    return 0;
}