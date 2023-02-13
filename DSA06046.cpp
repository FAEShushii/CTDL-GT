#include <bits/stdc++.h>
using namespace std;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int M[100001];
        for (int i = 0; i < n; i++)
            cin >> M[i];
        sort(M, M + n);
        int res = INT_MAX;
        for (int i = 0; i < n - 1; i++)
            res = min(res, (M[i + 1]) - M[i]);
        cout << res << endl;
    }return 0;
}