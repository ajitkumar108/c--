#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int d=a+b+c;
	int arr[d];
	vector<int> v;

	for(int i=0;i<d;i++)
	{
	    cin>>arr[i];
	}

	sort(arr,arr+d);
    for(int i=0;i<d;i++)
    {
        if(arr[i]==arr[i+1])
        {
            v.push_back(arr[i]);
            i++;
        }
    }
    cout<<v.size()<<endl;
    for(int i=0; i < v.size(); i++)
        cout << v.at(i) <<endl;
    
	return 0;
}
