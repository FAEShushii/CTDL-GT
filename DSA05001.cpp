#include<bits/stdc++.h>
using namespace std;
#define FOR(i, l, r) for (int i = l; i < r; i++)
#define sz(a)        a.size()

int main() {
	int t;
    cin >> t;
    while(t--){
		string a, b; cin >> a >> b;
		int dp[1001][1001];
		FOR(i, 0, sz(a) + 1) {
			FOR(j, 0, sz(b) + 1) {
				if (i == 0 || j == 0)dp[i][j] = 0;
				else {
					if (a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
					else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		cout << dp[sz(a)][sz(b)] << endl;
	}return 0;
}
