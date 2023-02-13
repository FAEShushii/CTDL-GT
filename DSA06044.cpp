#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n;
	cin>>n;
	int a[n];
	vector<int> chan, le;
	for (int i = 0; i< n; i++){
		cin >> a[i];
		if( (i + 1) % 2 == 0)chan.push_back(a[i]);
		else le.push_back(a[i]);
	}
	sort(chan.begin(), chan.end(), greater<int>());
	sort(le.begin(), le.end());
	int i = 0, j = 0;
	for(int k = 0 ; k < n ; k++){
		if((k+1) % 2 ==0){
			cout<< chan[i]<< " "; i++;
		}else{
			cout << le[j] << " "; j++;
		}
	}
	return 0;
}
