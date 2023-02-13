#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL); 

int tinh(int a, int b, char c) {
	if (c == '+')return a + b;
	if (c == '-')return a - b;
	if (c == '*')return a * b;
	if (c == '/')return a / b;
}
int main() {
    faster();
    int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		stack<int> X;
		for (int i = 0; i <s.length(); i++) {
			if (s[i] >= '0' && s[i] <= '9')X.push(s[i] - '0');
			else {
				int a = X.top(); X.pop();
				int b = X.top(); X.pop();
				X.push(tinh(b, a, s[i]));
			}
		}
		cout << X.top() << endl;
	}return 0;
}