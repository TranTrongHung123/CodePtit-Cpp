#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll a[n];
		for(ll i = 0; i < n; i++){
			cin >> a[i];
			a[i] = a[i] * a[i];
		}
		sort(a, a + n);
		ll ok = 0;
		for(ll i = n-1; i >= 2; i--){
			ll l = 0, r = i-1;
			while(l < r){
				if((a[l] + a[r]) == a[i]){
					ok = 1;
					break;
				}
				else if((a[l] + a[r]) > a[i]){
					--r;
				}
				else{
					++l;
				}
			}
		}
		if(ok){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}