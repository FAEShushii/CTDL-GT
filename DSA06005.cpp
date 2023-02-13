#include <bits/stdc++.h> 
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);  
int main (){ 
	faster();
	int t; cin >> t; 
	while(t--){ 
		int n, m; cin >> n >> m; 
		int b; 
		vector<int> a; 
		for(int i = 0; i < n; i++){ 
			cin >> b; 
			a.push_back(b); 
		} 
		for(int i = 0; i < m; i++){ 
			cin >> b; 
			a.push_back(b); 
		} 
		sort(a.begin(), a.end()); 
		cout<<a[0]<<" "; 
		for(int i = 0; i < a.size()-1; i++){ 
			if(a[i] != a[i+1]){ 
				cout << a[i+1] << " "; 
			} 
		} 
		cout<<endl; 
		for(int i = 0; i < a.size()-1; i++){ 
			if(a[i] == a[i+1]){ 
				cout << a[i] << " "; 
			} 
		}cout<<endl; 
	} 
	return 0; 
}
