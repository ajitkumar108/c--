#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    for (int i =0; i < a; i++)
    {
        cout<<arr[a-i-1]<<" ";
    }
    
    
    return 0;
}