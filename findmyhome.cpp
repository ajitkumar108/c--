#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    for (int i = 0; i < n; i++)
    {
    if (x==arr[i])
    {
        cout<<i;
    }
    else
    {
        if (x>arr[i]&&x<arr[i+1])
        {
            cout<<i+1;
        }   
    }      
    }
    return 0;
}