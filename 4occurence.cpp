#include <iostream>
using namespace std;
int main() {
	int T,temp,num,count=0;
	cin >> T;	
	while(T--)
	{
	    cin >> num;
	    count=0;
	    while(num!=0)
	    {
	          temp=num%10;
	        if(temp==4)
	        {
	      count++;
	        }
	        num=num/10;
	    }
	    cout << count << endl;
	}
	return 0;
	}