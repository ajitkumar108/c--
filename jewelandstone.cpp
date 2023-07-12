#include<bits/stdc++.h>
using namespace std ;
int main()
{
  int t ;
  cin >> t ;
  string j , s ;
  while(t--)
  {  int answer = 0;
      cin >> j >> s ;
       for( int i = 0 ; i < j.size() ; i++ )
       {
       	int k = 0;
       	while(k<s.size())
       	{
       		if(j[i] == s[k])
       		{
       			answer++;
       			s.erase(k,1);
       		}
       		else{
               k++;
       		}
       	}
       }
       cout << answer << endl ;
  }	
}