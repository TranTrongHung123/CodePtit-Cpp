#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int a[50][50];

void swap_row(int n1, int n2, int m){
	for(int j = 0; j < m; j++){
		swap(a[n1][j], a[n2][j]);
	}
}

int RankMatrix(int n, int m){
	int rank = m;
	for(int i = 0; i < rank; i++){
		if(a[i][i]){
			for(int j = 0; j < n; j++){
				if(i != j){
					int x = a[j][i] / a[i][i];
					for(int k = 0; k < rank; k++){
						a[j][k] -= (x * a[i][k]);
					}
				}
			}
		}
		else{
			bool check = true;
			for(int j = i + 1; j < n; j++){
				if(a[j][i]){
					swap_row(i, j, rank);
					check = false;
					break;
				}
			}
			if(check){
				--rank;
				for(int j = 0; j < n; j++){
					a[j][i] = a[j][rank];
				}
			}
			--i;
		}
	}
	return rank;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int TC;
	cin >> TC;
	while(TC--){
		int n, m;
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		cout << RankMatrix(n, m) << endl;
	}
}

//░░░░░░░░░░░░░░░░░░░░░░█████████
//░░███████░░░░░░░░░░███▒▒▒▒▒▒▒▒███
//░░█▒▒▒▒▒▒█░░░░░░░███▒▒▒▒▒▒▒▒▒▒▒▒▒███
//░░░█▒▒▒▒▒▒█░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░░█▒▒▒▒▒█░░░██▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒███
//░░░░░█▒▒▒█░░░█▒▒▒▒▒▒████▒▒▒▒████▒▒▒▒▒▒██
//░░░█████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░█▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██
//██▒▒▒███████████▒▒▒▒▒██▒▒▒▒▒▒▒▒██▒▒▒▒▒██
//█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒████████▒▒▒▒▒▒▒██
//██▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░█▒▒▒███████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
//░░████████████░░░█████████████████