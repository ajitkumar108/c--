#include<iostream>
#include<string>
using namespace std;
int lapi()
{
        string str;
        cin>>str;
        int temp[26]={0};
        int size=str.length();
        if(size==0 || size==1)
            return size;
        int mid=(size+1)/2;
        for(int i=0,j=mid;i<size/2,j<size;i++,j++){
            temp[str[i]-97]++;
            temp[str[j]-97]--;
        }
        for(int l=0;l<26;l++)
            if(temp[l]!=0)
            return 0;
        return 1;
    
}
int main(){
    long int t;
    cin>>t;
    for(int i=0;i<t;i++){
        if(lapi())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}