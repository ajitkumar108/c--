#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        cout<<(x*y)*(x*y+1)/2<<endl;
    }
    
    return 0;
}