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
        int count=0,temp=0;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
              if (arr[i]%2==0)
              {
                  count++;
              }
              else
              {
                  temp++;
              }     
        }    
    if (a%2==0)
    {
        cout<<temp/2<<endl;
    }
    else
    {
        cout<<temp/2<<endl;
    }
    }
    return 0;
}