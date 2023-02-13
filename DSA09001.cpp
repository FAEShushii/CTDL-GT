#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1, v, e, x, y;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        vector<set<int>> vs(v + 1);
        while (e--)
        {
            cin >> x >> y;
            vs[x].insert(y);
            vs[y].insert(x);
        }
        for (int i = 1; i <= v; ++i)
        {
            cout << i << ": ";
            if (vs[i].empty())
                continue;
            for (auto &j : vs[i])
                cout << j << ' ';
            cout << endl;
        }
    }
    return 0;
}