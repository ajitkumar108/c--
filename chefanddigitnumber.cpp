#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c1=0,c2=0;
        for(long long int i=0;i<s.length();i++){
            if(s[i]=='0'){
                c1++;
            }
            else{
                c2++;
            }
        }
        if(c1==1 || c2==1){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
	return 0;
}
