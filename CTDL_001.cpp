#include <bits/stdc++.h>
using namespace std;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);

int n, a[100], ok = 0;
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if (i == 0)
        ok = 0;
    else
        a[i] = 1;
}

bool ktra()
{
    int l = 1, r = n;
    while (l < r)
    {
        if (a[l] != a[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    faster();
    cin >> n;
    ok = 1;
    ktao();
    while (ok == 1)
    {
        if (ktra())
        {
            for (int i = 1; i <= n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
        sinh();
    }
}