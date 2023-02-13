#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i, l, r) for (int i = l; i < r; i++)
#define v(x) vector<x>
#define cin(M, n) FOR(i, 0, n) cin >> M[i]
bool check(string s, int n, v(int) M, int k)
{
    int sum = 0;
    FOR(i, 0, n)
    if (s[i] == '1')
        sum += M[i];
    if (sum == k)
        return 1;
    return 0;
}

int main()
{
    faster();
    int n, k;
    cin >> n >> k;
    v(int) M(n);
    cin(M, n);
    int count = 0;
    FOR(i, 0, pow(2, n))
    {
        auto s = bitset<20>(i).to_string();
        s = s.substr(20 - n, n);
        if (check(s, n, M, k))
        {
            FOR(i, 0, n)
            if (s[i] == '1')
                cout << M[i] << " ";
            cout << endl;
            count++;
        }
    }
    cout << count << endl;
}