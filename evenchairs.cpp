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
        if (a%8==0)
        {
            cout<<a/4<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        
    }
    
    return 0;
}
