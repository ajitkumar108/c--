#include<iostream>
using namespace std;
int e(int n,int x)
{
    static double p=1,f=1;
    int r;
    if (x==0)
    {
        return 1;
    }
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+(p/f);
    }
}
int main()
{
    cout<<e(4,15)<<endl;
    return 0;
}