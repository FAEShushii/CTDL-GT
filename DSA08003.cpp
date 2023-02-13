#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    deque<int> dq;
    string s;
    while(cin >> s)
    {
        if(s == "PUSHBACK")
        {
            cin >> t;
            dq.push_back(t);
        }
        else if(s == "PUSHFRONT")
        {
            cin >> t;
            dq.push_front(t);
        }
        else if(s == "PRINTFRONT")
        {
            if(dq.empty()) cout << "NONE\n";
            else cout << dq.front() << endl;
        }
        else if(s == "POPFRONT" and dq.size()) dq.pop_front();
        else if(s == "PRINTBACK")
        {
            if(dq.empty()) cout << "NONE\n";
            else cout << dq.back() << endl;
        }
        else if(s == "POPBACK" and dq.size()) dq.pop_back();
    }
    return 0;
}