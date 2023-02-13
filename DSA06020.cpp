#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

bool tk(int a[], int n, int x){
    int l=0, r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x) return true;
        else if(a[m] < x)
            l = m+1;
        else
            r = m-1;
        }
    return false;
}

int main(){
	faster();
    int t;
    cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int a[n];
        for(int &x:a)   cin>>x;
        if(tk(a, n ,x))
        cout<<tk(a, n ,x)<<endl;
        else cout<<"-1"<<endl;
        }
}
