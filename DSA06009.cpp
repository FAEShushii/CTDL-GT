#include<bits/stdc++.h>
using namespace std;

int a[10000001];

int main(){
	int t; cin>>t;
	while(t--){
		int n, k; cin>>n >>k;
		map<int, int> mp;
		for(int i= 0; i<n; i++){
			cin>>a[i];
			mp[a[i]]++;
		}long long tmp=0;
		for(int i=0; i< n; i++){
			tmp += mp[k - a[i]];
			if(a[i]*2 ==k){
				tmp--;
			}
		}
		cout<< tmp/2<< endl;
	}
	return 0;
}

