#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        int n =s.length();
         for (int i=0;i<n-4;i++)
        {
            if (s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y')
            {
                s[i+2]='w';
                s[i+3]='r';
                s[i+4]='i';
            }
        }
        cout << s << endl;
    }
    
    return 0;
}