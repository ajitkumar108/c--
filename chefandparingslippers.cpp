#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
         long long a,b,c;
        cin >> a >> b >> c;
        long long d=a-b;
        if(b >= d){
            cout << d*c << endl;
        }
        else if(d > b)
        {
            cout << b*c << endl;
        }
        
    }
    
    return 0;
}