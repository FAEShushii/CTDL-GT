#include <bits/stdc++.h>
using namespace std;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        int ok = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                ok = 1;
                swap(a[j], a[j + 1]);
            }
        }
        if (ok)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; j++)
                cout << a[j] << " ";
            cout << "\n";
        }
    }return 0;
}
