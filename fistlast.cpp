#include <iostream>
using namespace std;
 
int firstDigit(int n)
{
    while (n >= 10)
        n /= 10;
     
    return n;
}
 int lastDigit(int n)
{
    return (n % 10);
}
 
int main()
{
    int m;
    cin>>m;
    while (m--)
    {
    int n;
   cin>>n;
    cout << firstDigit(n) + lastDigit(n) << endl;
    }
    return 0;
}