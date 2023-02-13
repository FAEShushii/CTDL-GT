#include <iostream>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, a;
        cin >> n >> x;
        for (long long i = 0; i < n; i++)
        {
            cin >> a;
            if (a == x)
                cout << i + 1 << endl;
        }
    }
    return 0;
}