#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int &n){
    cin>>n;
    for(int i=0; i < n;i++){
        cin>> a[i];
    }
}

void xuat(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i]<<" ";
    }
}

void xoa1(int a[], int &n, int vt){
    for(int i=vt;i<n;i++){
        a[i]= a[i+1];
    }n--;
}

void xoa2(int a[], int &n){
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if(a[i] == a[j]){
                xoa1(a, n, j);
                j--;
            }
        }
    }
}

int main(){
    int n;
    int a[101];
    int vt;
    nhap(a,n);
    xoa2(a, n);
    xuat(a, n);
}
