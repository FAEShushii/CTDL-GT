#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    	int n; cin>>n;
    	int l= INT_MAX , r= INT_MIN;
    	bool a[1000001]= {0};
    	for (int i=0; i<n; i++){
    		int x; cin>>x;
    		l = min(l ,x);
    		r = max(r, x);
    		a[x] = 1;	
		}
		int count=0;
		for(int i= l ;i<= r ; i++){
			if(a[i] == 0 ){
				++count;
			}
		}
		cout<< count <<endl;
	}
	return 0;
}
