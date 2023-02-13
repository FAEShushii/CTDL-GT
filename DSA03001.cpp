#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
int main()
{
    faster();
    int M[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            while (n >= M[i])
            {
                count++;
                n = n - M[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}