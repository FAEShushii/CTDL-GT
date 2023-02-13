#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

vector<vi> edge(100005);
bitset<100005> visited;

void DFS(int u)
{
    visited[u] = 1;
    cout << u << ' ';
    for(int i = 0; i < edge[u].size(); ++i) if(!visited[edge[u][i]]) DFS(edge[u][i]);
}

int main()
{
    int t, n, m, x, y, u;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> u;
        for(int i = 1; i <= n; ++i)
        {
            edge[i].clear();
            visited[i] = 0;
        }
        while(m--)
        {
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        DFS(u);
        cout << endl;
    }
    return 0;
}