#include<bits/stdc++.h>
using namespace std; 
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
int a[1000] , n , ok;

int main(){
    faster();
    int t;
    cin >>t;
    while (t--){
        cin >> n;
        for(int i = 1 ;i <= n ; i++)
        {
            cin >> a[i];
        }
        ok = 0;
        while(next_permutation(a + 1 , a + n + 1))
        {
            for(int i = 1 ; i <= n ; i++)
            {
                cout << a[i] << " ";
            }
            ok = 1;
            break;
        }
        if(!ok) 
        {
            for(int i = 1 ; i <= n ; i++)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}