#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1, x;
    cin >> t;
    vector<set<int>> v(t + 1);
    for(int i = 1; i <= t; ++i)
    {
        for(int j = 1; j <= t; ++j)
        {
            cin >> x;
            if(x)
            {
                v[j].insert(i);
                v[i].insert(j);
            }
        }
    }
    for(int i = 1; i <= t; ++i)
    {
        for(auto &j : v[i]) cout << j << ' ';
        cout << endl;
    }
    return 0;
}