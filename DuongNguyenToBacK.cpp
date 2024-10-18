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

bool prime(int n){
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return n > 1;
}

bool check(vector<int> vt, int k){
	int sum = 0;
	for(int i = 0; i < k; i++){
		sum += vt[i];
	}
	if(prime(sum) == false) return false;
	for(int i = k; i < vt.size(); i++){
		sum += vt[i];
		sum -= vt[i - k];
		if(prime(sum) == false) return false;
	}
	return true;
}

int main(){
	int TC;
	cin >> TC;
	while(TC--){
		int k;
		cout << "Nhap vao n va k : ";
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
			for(int i = 1; i <= n; i++){
				vt.push_back(a[X[i]]);
			}
			if(check(vt, k)){
				for(auto x : vt){
					cout << x << " ";
				}
				cout << endl;
			}
			Sinh_Hoan_Vi();
		}
	}
}