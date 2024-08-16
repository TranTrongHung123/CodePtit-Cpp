#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int solve(int n, int p){
	int res = 0;
	for(int i = p; i <= n; i *= p){
		res += n / i;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n, p;
		cin >> n >> p;
		cout << solve(n,p) << endl;
	}
}