#include <bits/stdc++.h>
using namespace std;

int a[1001] , n , ok;

void ktao()
{
    for(int i = 1;  i <= n ; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1])
    {
        --i;
    }
    if(i == 0) ok = 0;
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i] , a[j]);
        sort(a + i + 1 , a + n + 1);
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n;
		ok= 1;
		ktao();
		while(ok == 1){
			for(int i = 1 ; i <= n;i++){
                cout<<a[i];
            }
			cout<<" ";
			sinh();
		}
		cout<<endl;
	}
}