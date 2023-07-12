#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        int arr[a];
        int count=0;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
            if (arr[i]>=10&&arr[i]<=60)
            {
                count++;
            }
            
        }
        cout<<count<<endl;
    }
    
    return 0;
}