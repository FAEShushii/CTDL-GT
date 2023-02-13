#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> M(n), dp(n + 1, 1);
    for (int i = 0; i < n; i++)
    {
        cin >> M[i];
    }
    int res = 0;
    for (int i = 1; i < n + 1; i++)
    {
        int tmp = 1;
        for (int j = 0; j < i; j++)
            if (M[j] < M[i])
                tmp = max(tmp, dp[j]);
        dp[i] += tmp;
        res = max(res, dp[i]);
    }
    cout << res << endl;
}
