#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string token;
        string res = "";
        while (ss >> token)
        {
            res = token + " " + res;
        }
        cout << res << endl;
    }return 0;
}