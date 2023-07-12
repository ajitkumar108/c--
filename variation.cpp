#include <bits/stdc++.h>
using namespace std;
long search_count(int* v, int n, int k){   
    sort(v, v + n);       
    long count = 0;
    int i = 0, j = 1; 
    while(j < n){
    if(v[j] - v[i] >= k){
    count += (n - j);
    i++;
    }
    else
    j++;
    }
    return count;
}
int main() {
    int n, k;
    cin>>n>>k;
    int v[n];
    for(int i = 0; i < n; i++){
    cin>>v[i];
    }
    long count = search_count(v, n, k);
    cout<<count;    
	return 0;
}