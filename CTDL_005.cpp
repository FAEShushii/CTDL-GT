#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
int main(){
	faster()
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i ++){
    	int x;
    	cin >> x;
        v.push_back(x);   
    }
    int x;
    cin >> x;
    v.erase(remove(v.begin(),v.end(),x),v.end());
    for(auto x : v){
        cout << x << " ";
    }
}
