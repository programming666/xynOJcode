#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cx[4][14];
signed main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        if (a == 'D')
        {
            char b;
            cin >> b;
            if (b >= '2' && b <= '9')
                cx[0][b - '0'] = 1;
            else
            {
                if (b == 'A')
                {
                    cx[0][1] = 1;
                    continue;
                }
                if (b == 'T')
                {
                    cx[0][10] = 1;
                    continue;
                }
                if (b == 'J')
                {
                    cx[0][11] = 1;
                    continue;
                }
                if (b == 'Q')
                {
                    cx[0][12] = 1;
                    continue;
                }
                if (b == 'K')
                {
                    cx[0][13] = 1;
                    continue;
                }
            }
        }
        if (a == 'C')
        {
            char b;
            cin >> b;
            if (b >= '2' && b <= '9')
                cx[1][b - '0'] = 1;
            else
            {
                if (b == 'A')
                {
                    cx[1][1] = 1;
                    continue;
                }
                if (b == 'T')
                {
                    cx[1][10] = 1;
                    continue;
                }
                if (b == 'J')
                {
                    cx[1][11] = 1;
                    continue;
                }
                if (b == 'Q')
                {
                    cx[1][12] = 1;
                    continue;
                }
                if (b == 'K')
                {
                    cx[1][13] = 1;
                    continue;
                }
            }
        }
        if (a == 'H')
        {
            char b;
            cin >> b;
            if (b >= '2' && b <= '9')
                cx[2][b - '0'] = 1;
            else
            {
                if (b == 'A')
                {
                    cx[2][1] = 1;
                    continue;
                }
                if (b == 'T')
                {
                    cx[2][10] = 1;
                    continue;
                }
                if (b == 'J')
                {
                    cx[2][11] = 1;
                    continue;
                }
                if (b == 'Q')
                {
                    cx[2][12] = 1;
                    continue;
                }
                if (b == 'K')
                {
                    cx[2][13] = 1;
                    continue;
                }
            }
        }
        if (a == 'S')
        {
            char b;
            cin >> b;
            if (b >= '2' && b <= '9')
                cx[3][b - '0'] = 1;
            else
            {
                if (b == 'A')
                {
                    cx[3][1] = 1;
                    continue;
                }
                if (b == 'T')
                {
                    cx[3][10] = 1;
                    continue;
                }
                if (b == 'J')
                {
                    cx[3][11] = 1;
                    continue;
                }
                if (b == 'Q')
                {
                    cx[3][12] = 1;
                    continue;
                }
                if (b == 'K')
                {
                    cx[0][13] = 1;
                    continue;
                }
            }
        }
    }
    int ans = 52;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 13; j++)
        {
            if (cx[i][j])
                ans--;
        }
    }
    cout << ans;
}