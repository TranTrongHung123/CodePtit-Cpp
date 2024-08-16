#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll f[1005];

void fibo(){
	f[0] = 0;
	f[1] = 1;
	for(ll i = 2; i <= 1000; i++){
		f[i] = (f[i-1] + f[i-2]);
		f[i] %= mod;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	fibo();
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << f[n] << endl;
	}
}