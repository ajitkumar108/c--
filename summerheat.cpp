#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<(c/a)+(d/b)<<endl;
    }
    return 0;
}