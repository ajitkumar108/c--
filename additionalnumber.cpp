#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b=0,c=0;
    int arr[a],arr1[a+1];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
        b=b+arr[i];
    }
    for (int i = 0; i < a+1; i++)
    {
        cin>>arr1[i];
        c=c+arr1[i];
    }
    cout<<c-b<<endl;
    return 0;
}