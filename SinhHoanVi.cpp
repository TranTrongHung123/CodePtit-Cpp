#include <bits/stdc++.h>
using namespace std;

int X[1000], n, flag;

void Khoi_Tao(){
	for(int i = 1; i <= n; i++){
		X[i] = i;
	}
}

void Sinh_Hoan_Vi(){
	int i = n-1;
	while((i >= 1) && (X[i] > X[i+1])){
		--i;
	}
	if(i == 0){
		flag = false;
	}
	else{
		int j = n;
		while(X[j] < X[i]){
			--j;
		}
		swap(X[i], X[j]);
		reverse(X + i + 1, X + n + 1);
	}
}

int main(){
	int TC;
	cin >> TC;
	while(TC--){
		cout << "Nhap vao n : ";
		cin >> n;
		Khoi_Tao();
		flag = true;
		while(flag){
			for(int i = 1; i <= n; i++){
				cout << X[i] << " ";
			}
			cout << endl;
			Sinh_Hoan_Vi();
		}
	}
}