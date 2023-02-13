#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int M[1000];
    vector<vector<int>> N;
    for (int i = 0; i < n; i++)
        cin >> M[i];
    for (int i = 0; i < n - 1; i++)
    {
        int be = i;
        for (int j = i + 1; j < n; j++)
        {
            if (M[be] > M[j])
                be = j;
        }
        swap(M[be], M[i]);
        vector<int> X;
        for (int l = 0; l < n; l++)
            X.push_back(M[l]);
        N.push_back(X);
    }
    for (int i = N.size() - 1; i >= 0; i--)
    {
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++)
            cout << N[i][j] << " ";
        cout << endl;
    }return 0;
}