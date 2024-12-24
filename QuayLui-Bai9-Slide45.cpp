#include <bits/stdc++.h>
using namespace std;

int n, w, k;

int a[1000], c[1000], x[1000];

void BackTracking(int i, int W, int V){
	if(i == n){
		if(W <= w and V == k){
			for(int j = 0; j < n; j++){
				cout << x[j] << " ";
			}
			cout << endl;
		}
		return;
	}
	x[i] = 1; BackTracking(i + 1, W + a[i], V + c[i]);
	x[i] = 0; BackTracking(i + 1, W, V);
	
}

int main(){
	cout << "Nhap vao n, w, k : ";
	cin >> n >> w >> k;
	cout << "Nhap mang a : ";
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << "Nhap mang c : ";
	for(int i = 0; i < n; i++){
		cin >> c[i];
	}
	cout << "Phan tu cua tap D la : " << endl;	
	BackTracking(0,0,0);
}