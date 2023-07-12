#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp;
    cin>>temp;
    while(temp--){
        int n,p;
        cin>>n>>p;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        } 
        vector<int>m;
        int i=0;
        for(i=0;i<n;i++){
            if(v[i]==1){
                m.push_back(1);
                break;
            }
        }
        int j=0;
        for(;i<n;i++){
            if(m[j]+1==v[i]){
                m.push_back(v[i]);
                j++;
            }
        }
        int l=n- m.size();
        if(l%p==0){
            cout<<l/p<<endl;
        }
        else{
            cout<<l/p+1<<endl;
        }
    }
}