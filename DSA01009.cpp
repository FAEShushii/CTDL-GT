#include <bits/stdc++.h>
using namespace std;

bool check(string s, int k)
{
    int count = 1;
    int ok = 0;
    for (int i = 1; i <= s.size(); i++)
    {
        if (s[i - 1] == '0' && s[i] == '0')
            count++;
        else
            count = 1;
        if (count > k)
            return false;
        if (count == k)
            ok++;
    }
    if (ok == 1)
        return true;
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<string> S;
    for (int i = 0; i <= pow(2, n); i++)
    {
        auto s = bitset<20>(i).to_string();
        s = s.substr(20 - n, n);
        if (check(s, k))
        {
            string tmp;
            for (auto c : s)
                (c == '1') ? tmp.push_back('B') : tmp.push_back('A');
            S.push_back(tmp);
        }
    }
    cout << S.size() << endl;
    for (auto s : S)
        cout << s << endl;
    return 0;
}