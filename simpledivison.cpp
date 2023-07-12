#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int arr[a];
        int count=0;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < a; i++)
        {
            if (arr[i]<=b&&arr[i]%c==0)
            {
                count++;
                continue;
            }
          }
        cout<<count<<endl;
    }
    
    return 0;
}