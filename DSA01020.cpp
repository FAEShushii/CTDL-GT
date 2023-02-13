#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >>t;
    while(t--){
		string s; cin >> s;
		int pos = s.find_last_of("1");
		if (pos == -1)cout << string(s.size(), '1')<<endl;
		else {
			s[pos] = '0';
			cout << s.substr(0, pos + 1) + string(s.size() - pos - 1, '1') << endl;
		}
	}return 0;
}