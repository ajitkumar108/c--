#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
       int A,B,C;
    cin>>A>>B>>C;
    if(A==0&&B==0&&C==0||A==1&&B==1&&C==1)
    {
        cout<<"0"<<endl;
    }
   
    else
    {
        cout<<"1"<<endl;
    }
        
    }
    return 0;
}