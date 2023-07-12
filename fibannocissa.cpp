#include<iostream>
using namespace std;
int fib(int n)
{
    int a=0,b=1,c=0;
    if (n<=1)
    {
        return n;
    }
    for (int i = 0; i < n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    cout<<fib(1)<<endl;
    return 0;
}