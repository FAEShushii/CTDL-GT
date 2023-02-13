#include <bits/stdc++.h>
using namespace std;
string Check(int M[], int N[], int n)
{
    for (int i = 0; i < n; i++)
        if (M[i] != N[i] && M[i] != N[n - i - 1])
            return "No";
    return "Yes";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int M[100], N[100];
        for (int i = 0; i < n; i++)
        {
            cin >> M[i];
            N[i] = M[i];
        }
        sort(M, M + n);
        cout << Check(N, M, n) << endl;
    }
    return 0;
}