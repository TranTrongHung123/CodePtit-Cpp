#include <bits/stdc++.h>
using namespace std;

int n, k, X[1000], a[1000];

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			int sum = 0;
			vector<int> vt;
			for(int l = 1; l <= n; l++){
				if(X[l] == 1){
					vt.push_back(a[l]);
					sum += a[l];
				}
			}
			if(sum == k){
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
		cout << "Nhap vao n va k : ";
		cin >> n >> k;
		cout << "Nhap vao n so tu nhien : ";
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		Try(1);
	}
}