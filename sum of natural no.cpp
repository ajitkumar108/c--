#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int V,g,h;
	cin>>V>>g;
	h=(V*V)/(2*g);
	cout<<h<<endl;
	}
	return 0;
}
