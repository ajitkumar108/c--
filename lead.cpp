#include<iostream>
using namespace std;

int main(){
    int t,a,b;
    int leads=0,winner;
    cin>>t;
    int c=0,d=0;
    while(t>0){
        cin>>a>>b;
        c+=a;
        d+=b;
        if(c>d && (c-d)>leads){
            leads=(c-d);
            winner=1;
        }
        else if(c<d && (d-c)>leads){
            leads=(d-c);
            winner=2;
        }
        
        t--;
    }
    cout<<winner<<" "<<leads;
}