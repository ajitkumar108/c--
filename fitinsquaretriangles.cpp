#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin>>b;
        b-=2;
        b/=2;
        b=b*(b+1)/2;
    cout<<b<<endl;
      }
    
    return 0;
}