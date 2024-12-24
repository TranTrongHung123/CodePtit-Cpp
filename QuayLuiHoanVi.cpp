#include <bits/stdc++.h>
using namespace std;

int n, X[100], mark[100];

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(mark[j] == 0){
			X[i] = j;
			mark[j] = 1;
			if(i == n){
				for(int l = 1; l <= n; l++){
					cout << X[l] << " ";
				}
				cout << endl;
			}
			else{
				Try(i + 1);
			}
			mark[j] = 0;
		}
	}
}

int main(){
	int TC; cin >> TC;
	while(TC--){
		cout << "Nhap vao n : ";
		cin >> n;
		memset(mark, 0, sizeof(mark));
		Try(1);
	}
}