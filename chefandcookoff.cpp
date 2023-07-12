#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
    	int sum = a+b+c+d+e;
        switch(sum)
		{
			case 0:
			cout << "Beginner\n";
			break;
			case 1:
			cout << "Junior Developer\n";
			break;
			case 2:
			cout << "Middle Developer\n";
			break;
			case 3:
			cout << "Senior Developer\n";
			break;
			case 4:
			cout << "Hacker\n"; 
			break;
			case 5:
			cout << "Jeff Dean\n";
			break;
			default:
			break;
		}
    }
    return 0;
}