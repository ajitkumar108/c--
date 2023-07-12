#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int n)
{
    int flag;
    for (int i = 0; i < n-1; i++)
    {
        flag=0;
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
    int main()
    {
        int arr[7]={9,8,7,6,5,0,1};
        bubble(arr,7);
        return 0;
    }
    