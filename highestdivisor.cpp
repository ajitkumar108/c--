#include<iostream>
using namespace std;
int main()
{
    int n,max=0;
    cin>>n;
    for (int i = 1; i < 10; i++)
    {
       if (n%i==0)
       {
         max=i;
       }
       
    }
    cout<<max<<endl;
    return 0;
}