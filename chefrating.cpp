#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int arr[b];
    for (int i = 0; i < b; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for (int i = 0; i < b; i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum+a<<endl;
    return 0;
}