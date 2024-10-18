#include <bits/stdc++.h>
using namespace std;

int n, k, m, X[1000], flag;

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

bool check1(){ // Kiem tra cau hinh co duy nhat m bit 1 lien tiep khong
	int count = 0;
	for(int i = 1; i <= n-m+1; i++){
		int tmp = true;
		for(int j = i; j <= i+m-1; j++){
			if(X[j] == 0){
				tmp = false;
				break;
			}
		}
		if(tmp == true){
			++count;
		}
	}
	if(count == 1){
		return true;
	}
	return false;
}

bool check2(){ // Kiem tra cau hinh co duy nhat k bit 0 lien tiep khong
	int count = 0;
	for(int i = 1; i <= n-k+1; i++){
		int tmp = true;
		for(int j = i; j <= i+k-1; j++){
			if(X[j] == 1){
				tmp = false;
				break;
			}
		}
		if(tmp == true){
			++count;
		}
	}
	if(count == 1){
		return true;
	}
	return false;
}

int main(){
	int TC;
	cin >> TC;
	while(TC--){
		cout << "Nhap vao n va m va k : ";
		cin >> n >> m >> k;
		Khoi_Tao();
		flag = true;
		while(flag){
			if(check1() && check2()){
				for(int i = 1; i <= n; i++){
					cout << X[i];
				}
				cout << endl;
			}
			Sinh_Nhi_Phan();
		}
	}
}