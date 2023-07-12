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
        if (a<100&&a>=1)
        {
            cout<<"EASY"<<endl;
        }
        else if (a<200&&a>=100)
        {
            cout<<"MEDIUM"<<endl;
        }
        else
        {
            cout<<"HARD"<<endl;
        }
        
    }
    
    return 0;
}