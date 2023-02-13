#include <bits/stdc++.h>
using namespace std;

int m = 1e9 + 7;

long long powMod(long long n, long long k)
{
    if (k == 0)
        return 1;
    long long x = powMod(n, k / 2);
    if (k % 2 == 0)
    {
        return x * x % m;
    }
    return n * (x * x % m) % m;
}

int main()
{
    int t, n;
    long long k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << powMod(n, k) << endl;
    }
    return 0;
}