#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int test(int* N, int n) {
	for (int i = 0; i <= 1000001; i++) {
		if (N[i] > n / 2)return i;
	}
	return -1;
}
int main() {
    faster();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000001];
		for (int i = 0; i < n; i++)cin >> M[i];
		int N[1000001] = { 0 };
		for (int i = 0; i < n; i++)N[M[i]]++;
		if (test(N, n) == -1)cout << "NO" << endl;
		else cout << test(N, n) << endl;
	}return 0;
}