#include <bits/stdc++.h>
using namespace std;
const int MOD = (int) 1e9+7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int M[1000000];
        for (int i = 0; i < n; i++)
            cin >> M[i];
        sort(M, M + n);
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            res += i * M[i];
            res %= MOD;
        }
        cout << res << endl;
    }
    return 0;
}
