#include<bits/stdc++.h>
using namespace std;
int fibbo(int n)
{
    if(n==1||n==0)
    return n;
    else
    return fibbo(n-1)+fibbo(n-2);
}
int main()
{
    int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fibbo(i);
      i++;
   }
   cout<<"\n"<<fibbo(x+1)<<endl;
   return 0;
}