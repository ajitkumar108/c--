#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        char arr[30];
        int count=0;
        int count1=0;
        int max=0;
        for(int i=0;i<30;i++)
        {
            cin>>arr[i];
            if(arr[i]=='1')
            {count++;}
        }
        for(int i=0;i<30;i++)
        {
            if(arr[i]=='1')
            {
                count1++;
            }
            else
            {
                if(count1>max)
                {
                    max=count1;
                }
                count1=0;
            }
        }
        if(count1>max)
        {
            max=count1;
        }
        //cout<<"total-1 = "<<count<<endl;
        //cout<<"cont-1 = "<<max<<endl;
        int total=(count*x)+(max*y);
        cout<<total<<endl;
    }
    return 0;
}