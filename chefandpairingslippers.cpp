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
        if (a/2>=b)
        {
            cout<<b*c<<endl;
        }
        else if (b>a/2)
        {
            cout<<(a-b)*c<<endl;
        }
        
    }
    
    return 0;
}