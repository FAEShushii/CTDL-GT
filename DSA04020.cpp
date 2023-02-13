#include <bits/stdc++.h>
using namespace std;
int tk(vector<int> M, int n, int k)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (M[m] == k)
            return m + 1;
        else if (M[m] < k)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> M(n);
        for (int i = 0; i < n; i++)
            cin >> M[i];
        int a = tk(M, n, k);
        if (a == -1)
            cout << "NO\n";
        else
            cout << a << endl;
    }
    return 0;
}