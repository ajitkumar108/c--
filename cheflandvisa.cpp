#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int x1,y1,z1,x2,y2,z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        if (x2>=x1&&y2>=y1&&z1>=z2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}