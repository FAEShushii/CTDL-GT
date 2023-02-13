#include <bits/stdc++.h>
using namespace std;
#define FOR(i, l, r) for (int i = l; i < r; i++)
#define sz(a) a.size()

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, p;
        cin >> m >> n >> p;
        string a, b, c;
        cin >> a >> b >> c;
        int dp[101][101][101];
        FOR(i, 0, sz(a) + 1)
        {
            FOR(j, 0, sz(b) + 1)
            {
                FOR(l, 0, sz(c) + 1)
                {
                    if (i == 0 || j == 0 || l == 0)
                        dp[i][j][l] = 0;
                    else
                    {
                        if (a[i - 1] == b[j - 1] && a[i - 1] == c[l - 1])
                            dp[i][j][l] = dp[i - 1][j - 1][l - 1] + 1;
                        else
                            dp[i][j][l] = max(dp[i - 1][j][l], max(dp[i][j][l - 1], dp[i][j - 1][l]));
                    }
                }
            }
        }
        cout << dp[sz(a)][sz(b)][sz(c)] << endl;
    }return 0;
}
