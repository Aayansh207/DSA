// _1__2__3__4__5_
// _10_9__8__7__6_
// _11_12_13_14_15
// _20_19_18_17_16
// _21_22_23_24_25
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int co = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            co += n;
            for (int j = 1; j <= n; j++)
            {
                if (co <= 9)
                {
                    cout << " " << co << " ";
                }
                else if (co <= 99)
                {
                    cout << " " << co;
                }
                else if (co <= 999)
                {
                    cout << co;
                }
                co--;
            }
            co += n;
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                co++;
                if (co <= 9)
                {
                    cout << " " << co << " ";
                }
                else if (co <= 99)
                {
                    cout << " " << co;
                }
                else if (co <= 999)
                {
                    cout << co;
                }
            }
        }
        cout << endl;
    }
    return 0;
}