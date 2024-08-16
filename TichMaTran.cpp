#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m, p;
	cin >> n >> m >> p;
	ll a[n][m], b[m][p];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			cin >> b[i][j];
		}
	}
	ll c[n][p];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			ll tmp = 0;
			for(int k = 0; k < m; k++){
				tmp += a[i][k] * b[k][j];
			}
			c[i][j] = tmp;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}		
}