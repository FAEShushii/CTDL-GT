#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ok = n, y = 0;
        int M[10000];
        vector < vector<int>> X;
        for (int i = 0; i < n; i++)
            cin >> M[i];
        while (ok--)
        {
            vector<int> Y;
			for (int i = y; i < n; i++)Y.push_back(M[i]);
			X.push_back(Y);
			y++;
			for (int i = n - 1; i >= 1; i--) {
				M[i] += M[i - 1];
			}
		}
		for (int i = X.size() - 1; i >= 0; i--) {
			cout << "[";
			for (int j = 0; j < X[i].size()-1; j++)	cout << X[i][j] << " ";
			cout << X[i][X[i].size() - 1] << "] ";
		}
		cout << endl;
    }return 0;
}
