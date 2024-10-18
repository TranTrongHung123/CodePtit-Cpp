#include <bits/stdc++.h>
using namespace std;

int n, X[1000], flag;

void Khoi_Tao(){
	for(int i = 1; i <= n; i++){
		X[i] = 0;
	}
}

void Sinh_Nhi_Phan(){
	int i = n;
	while((i >= 1) && (X[i] == 1)){
		X[i] = 0;
		--i;
	}
	if(i == 0){
		flag = false;
	}
	else{
		X[i] = 1;
	}
}

int main(){
	int TC;
	cin >> TC;
	while(TC--){
		cout << "Nhap do dai xau nhi phan : ";
		cin >> n;
		Khoi_Tao();
		flag = true;
		while(flag){
			for(int i = 1; i <= n; i++){
				cout << X[i];
			}
			cout << endl;
			Sinh_Nhi_Phan();
		}
	}
}