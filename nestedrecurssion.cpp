#include<iostream>
using namespace std;
int fun(int n)
{
    if (n>100)
    {
        return n-10;
        return fun(fun(n+11));
    }
    
}
int main()
{
    int r;
    r=fun(20);
    cout<<r<<endl;
    return 0; 
}