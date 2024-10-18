#include <bits/stdc++.h>
using namespace std;

int X[1000], n, k, flag;

void Khoi_Tao(){
	for(int i = 1; i <= k; i++){
		X[i] = i;
	}
}

void Sinh_To_Hop(){
	int i = k;
	while((i >= 1) && (X[i] == n-k+i)){
		--i;
	}
	if(i == 0){
		flag = false;
	}
	else{
		++X[i];
		for(int j = i+1; j <= k; j++){
			X[j] = X[j-1] + 1;
		}
	}
}

int main(){
	int TC;
	cin >> TC;
	while(TC--){
		int p;
		cout << "Nhap vao n, k, p : ";
		cin >> n >> k >> p;
		int a[n + 1];
		cout << "Nhap vao n so tu nhien : ";
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		Khoi_Tao();
		flag = true;
		while(flag){
			int sum = 0;
			for(int i = 1; i <= k; i++){
				sum += a[X[i]];
			}
			if(sum == p){
				for(int i = 1; i <= k; i++){
					cout << a[X[i]] << " "; 
				}				
				cout << endl;
			}
			Sinh_To_Hop();
		}
	}
}