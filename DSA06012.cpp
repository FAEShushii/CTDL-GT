#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

int main(){
	faster();
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		int k;
		cin>>k;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n, greater<int>());
		for(int i= 0 ; i<k; i++){
			cout<< a[i]<< " ";
		}
		cout<<endl;
	}return 0;
}
