#include <bits/stdc++.h>
using namespace std;

int X[1000], n, len, flag;

void Khoi_Tao(){
	X[1] = n;
	len = 1;
}

void Sinh_Phan_Hoach(){
	int i = len;
	while((i >= 1) && (X[i] == 1)){
		--i;
	}
	if(i == 0){
		flag = false;
	}
	else{
		--X[i];
		int tmp = len - i + 1;
		int x = tmp / X[i];
		int y = tmp % X[i];
		len = i;
		for(int j = 1; j <= x; j++){
			X[++len] = X[i];
		}
		if(y){
			X[++len] = y;
		}
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
			for(int i = 1; i <= len; i++){
				cout << X[i];
				if(i != len){
					cout << " + ";
				}
			}
			cout << endl;
			Sinh_Phan_Hoach();
		}
	}
}