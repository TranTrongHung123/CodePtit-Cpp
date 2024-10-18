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
		int k;
		cout << "Nhap vao n va k : ";
		cin >> n >> k;
		int a[n + 1];
		cout << "Nhap n so tu nhien : ";
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		Khoi_Tao();
		flag = true;
		while(flag){
			int sum = 0;
			for(int i = 1; i <= n; i++){
				if(X[i] == 1){
					sum += a[i];
				}
			}
			if(sum == k){
				for(int i = 1; i <= n; i++){
					if(X[i] == 1){
						cout << a[i] << " ";
					}
				}
				cout << endl;			
			}
			Sinh_Nhi_Phan();
		}
	}
}