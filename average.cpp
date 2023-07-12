#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    int count=0;
    for (int i = 0; i < a; i++)
    {
       cin>>arr[i];
       cout<<arr[i]<<end;
       for (int j = i+1; i < a; i++)
       {
           for (int k = 0; k < a; i++)
           {
              if (arr[k]==(arr[j]+arr[i])/2)
              {
                  
                  cout<<count;
                  count++;
              }
              
           }
           
       }
       
    }
    
    return 0;
}