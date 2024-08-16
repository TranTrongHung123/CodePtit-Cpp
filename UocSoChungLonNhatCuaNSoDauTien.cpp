#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll lcm(ll a, ll b){
	return a / __gcd(a,b) * b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll res = 1;
		for(ll i = 2; i <= n; i++){
			res = lcm(res,i);
		}
		cout << res << endl;
	}
}