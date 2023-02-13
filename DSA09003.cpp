#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, v, e, x, y;
    cin >> t;
    while(t--)
    {
        cin >> v >> e;
        vector<set<int>> vs(v + 1);
        while(e--)
        {
            cin >> x >> y;
            vs[x].insert(y);
        }
        for(int i = 1; i <= v; ++i)
        {
            cout << i << ": ";
            for(auto &j : vs[i]) cout << j << ' ';
            cout << endl;
        }
    }
    return 0;
}