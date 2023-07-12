#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if (x>0 && x<51)
    {
        cout<<"100"<<endl;
    }
    else if (x>50 && x<101)
    {
        cout<<"50"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }  
    return 0;
}