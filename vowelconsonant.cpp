#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if (x=='a'|| x=='e'||x=='i'||x=='o'||x=='u')
    {
        cout<<"Vowel"<<endl;
    }
    else
    {
        cout<<"Consonant"<<endl;
    }
    return 0;
}