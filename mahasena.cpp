#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int lucky = 0;
    int unlucky = 0;
    for (int i = 0; i < n; i++)
    {
        int weapons;
        cin >> weapons;
        if (weapons % 2 == 0)
        {
            lucky++;
        }
        else
        {
            unlucky++;
        }
    }
    if (lucky > unlucky)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY" << endl;
    }
    return 0;
}