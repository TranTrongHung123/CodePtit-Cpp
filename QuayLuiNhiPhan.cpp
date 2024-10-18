#include <bits/stdc++.h>
using namespace std;

int X[1000], n;

void Hien_Thi(){
	for(int i = 1; i <= n; i++){
		cout << X[i];
	}
	cout << endl;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
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
		cout << "Nhap do dai xau nhi phan : ";
		cin >> n;
		Try(1);
	}
}