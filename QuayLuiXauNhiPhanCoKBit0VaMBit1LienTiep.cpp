#include <bits/stdc++.h>
using namespace std;

int X[1000], n, k, m;

void Hien_Thi(){
	for(int i = 1; i <= n; i++){
		cout << X[i];
	}
	cout << endl;
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

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			if(check1() and check2()){
				Hien_Thi();				
			}
		}
		else{
			Try(i + 1);
		}
	}
}

int main(){
	int TC; cin >> TC;
	while(TC--){
		cout << "Nhap vao n, k, m : ";
		cin >> n >> k >> m;
		Try(1);
	}
}