#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
    int n;
    cin>>n;
    int a[10001];
    int x, dem=0;
    cin>>x;
    for(int i=0; i < n;i++){
        cin>> a[i];
    }
    for(int i=0; i < n; i++){
        if(a[i] == x){
            dem = dem + 1;
        }
    }
    if(dem == 0)
        cout<<"-1";
    else
        cout<<dem;    
}
}
