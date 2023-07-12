#include<bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    int n = s.size();
    stack<string>st;
    string s1=" ";
    for (int i = 0; i < n; i++)
    {
        if (s[i]>='a'&&s[i]<='z')
        {
            s1+=s[i];
            continue;
        }
      else
      {
          st.push(s1);
          s1="";
      }
    }
 st.push(s1);
 while (!st.empty())
 {
   cout<<st.top()<<" ";
   st.pop(); 
 }
    
    
}
int main()
{
     string s;
     getline(cin,s);
     reverse(s);
    return 0;
}