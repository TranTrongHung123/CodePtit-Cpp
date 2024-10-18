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
		cout << "Nhap lan luot gia tri cua n va k : ";
		cin >> n >> k;
		Khoi_Tao();
		flag = true;
		while(flag){
			for(int i = 1; i <= k; i++){
				cout << X[i] << " ";
			}
			cout << endl;
			Sinh_To_Hop();
		}
	}
}