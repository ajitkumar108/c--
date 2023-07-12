#include<iostream>
using namespace std;
int main()
{
    int x,sum=0;
     cout<<"Enter the number whose sum up to the number is - "<<endl;
     cin>>x;
    for (int i = 0; i <= x; i++)
    {
     sum += i;
    }
    cout<<"sum of natural number is "<<sum<<endl;
    return 0;
}