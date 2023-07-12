#include<iostream>
#include<algorithm>
using namespace std;
int digitTochar(int digit)
{
    return digit+'0';
}
int charTodigit(int digit)
{
    return digit-'0';
}
string addnumber(string s1,string s2)
{
    if(s1.length()>s2.length())
    {
swap(s1,s2);
    }
    string result="";
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int carry=0;
    for(int i=0;i<s1.length();i++)
    {
int d1=charTodigit(s1[i]);
int d2=charTodigit(s2[i]);
int sum=d1+d2+carry;
int output=sum%10;
carry=sum/10;
result.push_back(digitTochar(output));
    }
    for (int i = s1.length(); i < s2.length(); i++)
    {
        int d2=charTodigit(s2[i]);
        int sum=d2+carry;
        int output=sum%10;
        carry=sum/10;
        result.push_back(output);
    }
    if(carry)
    result.push_back(1);
    reverse(result.begin(),result.end());    
    return result;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string result=addnumber(s1,s2);
    cout<<addnumber(s1,s2);
 /*   int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
*/return 0;
} 