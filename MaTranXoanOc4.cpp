#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int a[n][n];
	vector<int> vt;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			vt.push_back(a[i][j]);
		}
	}
	sort(vt.begin(), vt.end());
	int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
	int idx = 0;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = vt[idx++];
		}
		++h1;
		for(int i = h1; i <= h2; i++){
			a[i][c2] = vt[idx++];
		}
		--c2;
		for(int i = c2; i >= c1; i--){
			a[h2][i] = vt[idx++];
		}
		--h2;
		for(int i = h2; i >= h1; i--){
			a[i][c1] = vt[idx++];
		}
		++c1;				
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}	
}