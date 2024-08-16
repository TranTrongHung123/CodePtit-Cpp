#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll C[1005][1005];

void tohop(){
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || j == i){
				C[i][j] = 1;
			}
			else{
				C[i][j] = (C[i-1][j] + C[i-1][j-1]) % mod;
			}
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	tohop();
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << C[n][k] << endl;
	}
}