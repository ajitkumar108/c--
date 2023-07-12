#include <bits/stdc++.h>

using namespace std;

int main()
{
  int test, n, number;
  cin >> test;
  while(test--){
    int even = 0;
    int odd = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
      cin >> number;
      if (number % 2 == 0)
      {
        even++;
      }
      else
      {
        odd++;
      }
    }
    cout << min(odd, even) << endl;
  }
  return 0;
}