#include <bits/stdc++.h>
using namespace std;

int n, k, X[1000], a[1000], b;

void Try(int i){
	for(int j = X[i-1]+1; j <= n-k+i; j++){
		X[i] = j;
		if(i == k){
			int sum = 0;
			vector<int> vt;
			for(int l = 1; l <= k; l++){
				sum += a[X[l]];
				vt.push_back(a[X[l]]);
			}
			if(sum == b){
				for(auto it : vt){
					cout << it << " ";
				}
				cout << endl;
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
		cout << "Nhap vao n, k, b : ";
		cin >> n >> k >> b;
		cout << "Nhap vao n so tu nhien : ";
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		Try(1);
	}
}