#include <bits/stdc++.h>
using namespace std;

int a[101], n, k, ok;
void next()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        --i;
    }
    if (i == 0)
    {
        ok = 1;
        return;
    }
    a[i]++;
    for (int j = i + 1; j <= k; j++)
    {
        a[j] = a[i] + j - i;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ok = 0;
        set<int> s;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        next();
        if (ok)
        {
            cout << k << endl;
        }
        else
        {
            int ans = 0;
            for (int i = 1; i <= k; i++)
            {
                if (!s.count(a[i]))
                    ++ans;
            }
            cout << ans << endl;
        }
    }return 0;
}