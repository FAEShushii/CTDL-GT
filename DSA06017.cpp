#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int t;
    cin>>t;
    while(t--){
    	int n, m; cin>>n >> m;
    	int a[n+m];
    	for (int i = 0; i < n+ m; i++)	cin>>a[i];
    	sort(a,a+m+n);
    	for(int i = 0; i < n+ m; i++){
    		cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
