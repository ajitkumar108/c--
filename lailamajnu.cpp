#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[3];
    for (int i = 0; i < 3; i++)
    {
    cin>>arr[i];
    }
    cout<<(arr[0]+arr[2])/2 -arr[1]<<endl;
    return 0;
}