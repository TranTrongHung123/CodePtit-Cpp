#include <bits/stdc++.h>
using namespace std;

int n, k, X[1000];

void Hien_Thi(){
	for(int i = 1; i <= k; i++){
		cout << X[i] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = X[i-1]+1; j <= n-k+i; j++){
		X[i] = j;
		if(i == k){
			Hien_Thi();
		}
		else{
			Try(i + 1);
		}
	}
}

int main(){
	int TC; cin >> TC;
	while(TC--){
		cout << "Nhap vao n va k : ";
		cin >> n >> k;
		Try(1);
	}
}