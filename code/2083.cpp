#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int a;
    cin >> a;
    while (a--)
    {
        string s;
        cin >> s;
        bool f2 = 1, f8 = 1, f10 = 1, f16 = 1;
        for (char i : s)
        {
            if (i >= 'A' && i <= 'Z')
            {
                f2 = 0;
                f8 = 0;
                f10 = 0;
                if (i > 'F')
                {
                    f16 = 0;
                    break;
                }
            }
            else
            {
                if (i - '0' > 7)
                {
                    f8 = 0;
                }
                if (i - '0' > 1)
                {
                    f2 = 0;
                }
            }
            if (f2 == 0 &&f8 == 0 && f16 == 0 && f10 == 0)
                break;
        }
        cout<<f2<<' '<<f8<<' '<<f10<<' '<<f16<<'\n';
    }
    return 0;
}