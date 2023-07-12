#include<iostream>
using namespace std;
float e(int m ,int n)
{
    int r;
    static int p=1,f=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        r=e(m,n-1);
        p=p*m;
        f=f*n;
        return r+(float)
        p/f;
    }
}
int main()
{
    cout<<e(2,4);
    return 0;
}