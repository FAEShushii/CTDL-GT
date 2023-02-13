#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1, x, n;
    stack<int> st;
    vector<string> v(10005);
    string s;
    for(int i = 1; i <= 1e4; ++i)
    {
        s = "";
        x = i;
        while(x)
        {
            st.push(x & 1);
            x >>= 1;
        }
        while(st.size())
        {
            s += to_string(st.top());
            st.pop();
        }
        v[i] = s;
    }
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1 ; i<= n; ++i) cout << v[i] << ' ';
        cout << endl;
    }
    return 0;
}