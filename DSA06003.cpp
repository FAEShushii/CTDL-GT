#include <bits/stdc++.h> 
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL); 
int main(){ 
	faster();
	int t ; cin >> t ; 
	while(t--){ 
		int n , dem = 0 ; 
		cin >> n ; int a[n] ; 
		for(int i = 0 ; i < n ; i++){ 
			cin >> a[i] ; 
		} 
		for(int i = 0 ; i < n ; i++){ 
			int min = a[i]; 
			int m = 0 ; 
			for(int j = i + 1 ; j < n ; j++){ 
				if(a[j] < min){ 
					min = a[j] ; 
					m = j ; 
			} 
		} if(a[i] > min ){ 
			swap(a[i], a[m]); 
			dem++; 
			} 
		} 
		cout << dem << endl; 
	}return 0;
}
