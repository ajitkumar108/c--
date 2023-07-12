#include <iostream>
using namespace std;

int check(string str,string str1)
{
        for(int i=0;i<str1.length();i++)
        {
            int flag=1;
            for(int j=0;j<str.length();j++)
            {
                if(str1[i]==str[j])
                {
                    flag=1;
                    break;
                }
                else
                {
                    flag=0;
                }
            }
            if(flag==0)
            {
                return 0;
            }
        }
        return 1;
        
}

int main() 
{
    string str;
    cin>>str;
    int t;
    cin>>t;
    while(t--)
    {
        string str1;
        cin>>str1;
        if(check(str,str1))
        {cout<<"Yes"<<endl;}
        else
        {cout<<"No"<<endl;}
    }
    
    
    
    return 0;
}