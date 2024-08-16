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
		ll x, y, z, n;
		cin >> x >> y >> z >> n;
		ll k = lcm(lcm(x, y), z);
		ll left = pow(10, n-1); 
		ll right = pow(10, n) - 1; 
		ll res = (left + k - 1) / k * k;
		if(res > right){
			cout << -1 << endl;
		}
		else{
			cout << res << endl;
		}
	}
}