#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for( int &x : a) cin>>x;
		int l, r;
		for(int i= 0; i< n-1; i++){
			if(a[i]>a[i+1]){
				l = i; break ;
			}
		}for(int i= n-1; i> 0 ; i--){
			if(a[i-1]> a[i]){
				r = i; break;
			}
		}
		int min = *min_element(a + l ,  a + r + 1);
		int max = *max_element(a + l , a + r + 1);
		for(int i= 0; i<=l; i++){
			if(a[i] >min){
				l = i; break ;
			}
		}for(int i= n-1; i>= r ; i--){
			if(max> a[i]){
				r = i; break;
			}
		}
		cout << l + 1 << " "<< r + 1<<endl;	
	}return 0;
}
