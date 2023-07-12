#include<iostream>
using namespace std;
int fun(int n)
{
    if (n==0)
    return 0;
   return fun(n-1)+n;
}
int main()
{
    int a;
    a=fun(5);
    cout<<a<<endl;
    return 0;
}