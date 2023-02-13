#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
int n, ok, k, a[1000];
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 6;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 8)
    {
        a[i--] = 6;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 8;
    }
}
bool check()
{
    if (a[1] != 8 || a[n] != 6)
        return false;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 8 && a[i - 1] == 8)
            return false;

        if (i >= 4 && a[i] == 6 && a[i - 1] == 6 && a[i - 2] == 6 && a[i - 3] == 6)
            return false;
    }
    return true;
}
int main()
{
    faster();
    cin >> n;
    ok = 1;
    ktao();
    while (ok)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
        sinh();
    }
}