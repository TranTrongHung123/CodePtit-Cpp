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

bool check(vector<int> vt){
	for(int i = 1; i < vt.size(); i++){
		if(vt[i] < vt[i-1]){
			return false;
		}
	}
	return true;
}

int main(){
	int TC;
	cin >> TC;
	while(TC--){
		cout << "Nhap lan luot gia tri cua n va k : ";
		cin >> n >> k;
		int a[n + 1];
		cout << "Nhap vao n so tu nhien : ";
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		Khoi_Tao();
		flag = true;
		while(flag){
			vector<int> vt;
			for(int i = 1; i <= k; i++){
				vt.push_back(a[X[i]]);
			}
			if(check(vt)){
				for(auto x : vt){
					cout << x << " ";
				}
				cout << endl;
			}
			Sinh_To_Hop();
		}
	}
}