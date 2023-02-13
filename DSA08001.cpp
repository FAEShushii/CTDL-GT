#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1, x, n, y;
    cin >> t;
    while(t--)
    {
        deque<int> q;
        cin >> n;
        while(n--)
        {
            cin >> x;
            if(x == 1) cout << q.size() << endl;
            else if(x == 2)
            {
                if(q.empty()) cout << "YES\n";
                else cout << "NO\n";
            }
            else if(x == 3)
            {
                cin >> y;
                q.push_back(y);
            }
            else if(x == 4 and q.size()) q.pop_front();
            else if(x == 5)
            {
                if(q.size()) cout << q.front() << endl;
                else cout << -1 << endl;
            }
            else if(x == 6)
            {
                if(q.size()) cout << q.back() << endl;
                else cout << -1 << endl;
            }
        }
    }
    return 0;
}