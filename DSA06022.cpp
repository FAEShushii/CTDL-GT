#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++ ){
			cin >> a[i];
		}
		sort(a, a+n);
		int ok =0;
		for(int i = 0; i < 3 ; i++){
			if(a[i] == a[i+1] ){
				ok = 1; 
			}	
		}if( ok ) cout << "-1"<< endl;
		else{for(int i=0; i < 2;i++){
			cout << a[i]<< " ";
			}cout<< endl;
		}
	}return 0;
}
