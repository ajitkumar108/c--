#include<iostream>
using namespace std;
int main()
{
    string s,str="hello";
    cin>>s;
    int j=0,count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(str[j]==s[i])
        j++,count++;
        
    }
    if (count==5)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    
    return 0;
}