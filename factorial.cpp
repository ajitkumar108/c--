#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while (t--)
   {
    int n;
    long long int factorial = 1;
    cin >> n;
    if (n < 0)
      {
          return 1;
      }
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout<<factorial<<endl;    
   }
    }

    return 0;
}