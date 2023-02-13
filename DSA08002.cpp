#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    deque<int> q;
    cin >> n;
    string s;
    while (cin >> s)
    {
        if (s == "PUSH")
        {
            cin >> n;
            q.push_back(n);
        }
        else if (s == "PRINTFRONT")
        {
            if (q.size())
                cout << q.front() << endl;
            else
                cout << "NONE\n";
        }
        else if (s == "POP" and q.size())
            q.pop_front();
    }
    return 0;
}