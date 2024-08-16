#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll luythua(ll x, ll y, ll p){
	if(y == 0){
		return 1;
	}
	ll k = luythua(x, y/2, p) % p;
	if(y % 2 == 1){
		return (((k * k) % p) * (x % p)) % p;
	}
	else{
		return ((k % p)* (k % p)) % p;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while(t--){
		ll x, y, p;
		cin >> x >> y >> p;
		cout << luythua(x,y,p) << endl;
	}
}