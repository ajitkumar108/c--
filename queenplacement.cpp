#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        if (a<=3)
        {
        cout<<"..."<<endl;
        cout<<".Q."<<endl;
        cout<<"..."<<endl;
        }
        else
        {
            int k=0;
            for (int i = 1; i <=a; i++)
            {
                for (int j = 1; j <=a; j++)
                {
                    if (i==i+k&&j==a-k)
                    {
                        cout<<"Q"<<endl;
                        k=2;
                        if (i+2>a||j-2>a)
                        {
                            k=1;
                        }
                      /*  else
                        {
                            k=2;
                        }
                        */
                    }
                    else
                    {
                        cout<<"."<<endl;
                    }
                    
                }
                
            }
            
        }
        
    }
    
    return 0;
}