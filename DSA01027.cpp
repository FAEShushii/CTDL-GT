#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> M(n);
    for (int i = 0; i < n; i++)
        cin >> M[i];
    sort(M.begin(), M.end());
    do
    {
        for (int i = 0; i < n; i++)
            cout << M[i] << " ";
        cout << endl;
    } while (next_permutation(M.begin(), M.end()));
    return 0;
}
