#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

vector<vi> edge(100005);
bitset<100005> visited;

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(q.size())
    {
        u = q.front();
        cout << u << ' ';
        q.pop();
        for(int &i : edge[u])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int t = 1, n, m, x, y, u;
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
        }
        BFS(u);
        cout << endl;
    }
    return 0;
}