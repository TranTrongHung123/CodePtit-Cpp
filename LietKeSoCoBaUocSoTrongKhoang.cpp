#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int f[1000005];

void sieve(){
	for(int i = 0; i <= 1000000; i++){
		f[i] = 1;
	}
	f[0] = f[1] = 0;
	for(int i = 2; i <= 1000; i++){
		for(int j = i*i; j <= 1000000; j += i){
			f[j] = 0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	ll t;
	cin >> t;
	while(t--){
		ll l, r;
		cin >> l >> r;
		ll x = ceil(sqrt(l));
		ll y = floor(sqrt(r));
		ll cnt = 0;
		for(ll i = x; i <= y; i++){
			if(f[i]){
				++cnt;
			}
		}
		cout << cnt << endl;
	}
}