#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        long double a,b;
        cin>>a;
        cin>>b;
        cout<<sqrt(a)-b/(pow(a,b))<<endl;

    }
    
    return 0;
}