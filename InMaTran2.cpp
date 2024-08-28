#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int m;
		cin >> m;
		int n = 4*m;
		int a[n][n];
		int pos = 1;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				a[i][j] = pos++;
			}
		}	
		int h1 = 0, c1 = 0, h2 = n-1, c2 = n-1;
		vector<int> coil1;
		while(h1 <= h2 && c1 <= c2){
			for(int i = h1; i <= h2; i++){
				coil1.push_back(a[i][c1]);
			}
			++c1; --c2;
			for(int i = c1; i <= c2; i++){
				coil1.push_back(a[h2][i]);
			}
			++h1; --h2;
			for(int i = h2; i >= h1; i--){
				coil1.push_back(a[i][c2]);
			}
			++c1; --c2;
			for(int i = c2; i >= c1; i--){
				coil1.push_back(a[h1][i]);
			}
			++h1; --h2;
		}
		reverse(coil1.begin(), coil1.end());
		vector<int> coil2; // Phan tu o day 2 = 16 * m * m - (Phan tu o day 1)
		for(int i = 0; i < coil1.size(); i++){
			coil2.push_back(16 * m * m + 1 - coil1[i]);
		}
		for(auto x : coil2) cout << x << " ";
		cout << endl;
		for(auto x : coil1) cout << x << " ";
		cout << endl;
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