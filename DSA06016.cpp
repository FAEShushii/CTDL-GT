#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while ( t--){
		int n, m; cin>>n >>m;
		int a[n], b[m];
		for( int i=0; i< n; i++){
			cin>> a[i];
		}
		for( int i=0; i< m; i++){
			cin>> b[i];
		}
		int m1 = *max_element(a, a+n);
		int m2 = *min_element(b, b+n);	
		cout<< 1ll* m1 * m2 << endl;
	}
}
