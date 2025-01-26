#include <bits/stdc++.h>
using namespace std;
// BINARY SEARCH
// Tim kiem x
int bs(int a[] , int n , int x){
	int l = 0 , r = n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] == x) 1;
		else if(a[m] < x) l = m+1;
		else r = m-1;
	} return 0;
}

// Tim vi tri dau tien cua phan tu x
int bs2(int a[] , int n , int x){
	int l = 0 , r = n-1;
	int pos = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			pos = m;
			r = m-1;
		} else if (a[m] < x){
			l = m+1;
		} else {
			r = m-1;
		}
	}
	return pos;
}

// Tim vi tri cuoi cung cua phan tu x
int bs3(int a[] , int n , int x){
	int l = 0 , r = n-1;
	int pos = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] == x){
			pos = m;
			l = m+1;
		} else if (a[m] < x){
			l = m+1;
		} else {
			r = m-1;
		}
	} return pos;
}
// Tim vi tri dau tien cua phan tu >= x
int bs4(int a[], int n , int x){
	int l = 0 , r = n-1;
	int pos = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] >= x){
			pos = m;
			l = m+1;
		} else {
			r = m-1;
		}
	}
	return pos;
}

// Tim vi tri cuoi cung cua phan tu >= x
int bs5(int a[] , int n , int x){
	int l = 0 , r = n-1;
	int pos = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] <= x){
			pos = m;
			r = m-1;
		} else {
			l = m+1;
		}
	} return pos;
}

 
int main(){
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int x;
	cin >> x;
	
	int _pos = bs5(a,n,x);
	cout << _pos << endl;
	
	
	return 0;
}




















