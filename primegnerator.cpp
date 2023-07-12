#include <iostream>
using namespace std;

int main ()
{
    int Q;
    cin>>Q;
    while (Q--)
    {
    
   int num1, num2, i, j, temp, flag;
   cin >> num1 >> num2;
   if (num1 > num2)
   {
      temp = num1;
      num1 = num2;
      num2 = temp;
   }
 for (i = num1 ; i <= num2; ++i)
   {
      flag = 0; 
      for (j = 2; j <= i/2; ++j)
      {
         if (i % j == 0)
         {
            flag = 1;
            break;
         }
      }
      if (flag == 0) 
         cout << i <<endl;;
   }
       }
   return 0;
}