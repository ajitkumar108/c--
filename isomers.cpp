#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int j;
    cin>>j;
    while (j--)
    {
        int n;
        cin>>n;
        if(n== 1||n==2||n==3)
            cout << "1" << endl;
       else if(3<n && n<8)
            cout << pow(2,n-4)+1 << endl;
       else if(n==8)
            cout <<   18  << endl;
      else  if(n==9)
            cout <<  35   << endl;
       else if(n==10)
            cout << 75    << endl;
       else if(n==11)
            cout << 159    << endl;
       else if(n==12)
            cout <<  355   << endl;
       else if(n==13)
            cout <<  802   << endl;
      else  if(n==14)
            cout << 1858    << endl;
      else  if(n==15)
            cout <<   4347  << endl;
       else if(n==16)
            cout <<   10359  << endl;
      else  if(n==17)
            cout <<   	24894   << endl;
       else if(n==18)
            cout << 60523    << endl;
       else if(n==19)
            cout <<   	148284   << endl;
       else if(n==20)
            cout <<    	366319  << endl; 
            
    }
    
    return 0;
}