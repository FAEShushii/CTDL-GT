#include <iostream>
#include <cmath>
#include <vector>
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
using namespace std;
int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int M[1000];
        int gt = 1;
        vector<vector<int>> N;
        for (int i = 0; i < n; i++)
            cin >> M[i];
        for (int i = 1; i < n; i++)
        {
            int ok = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (M[j] > M[j + 1])
                {
                    swap(M[j], M[j + 1]);
                    ok++;
                }
            }
            if (ok)
            {
                vector<int> X;
                for (int l = 0; l < n; l++)
                    X.push_back(M[l]);
                N.push_back(X);
            }
        }
        for (int i = N.size() - 1; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; j++)
                cout << N[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}