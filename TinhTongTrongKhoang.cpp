#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll n;
ll prefix[10005], a[10005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while(t--){
		ll q;
		cin >> n >> q;
		for(ll i = 1; i <= n; i++){
			cin >> a[i];
		}
		for(ll i = 1; i <= n; i++){
			prefix[i] = prefix[i-1] + a[i];
		}
		while(q--){
			ll l, r;
			cin >> l >> r;
			if(l == 1){
				cout << prefix[r] << endl;
			}
			else{
				cout << prefix[r] - prefix[l-1] << endl;
			}
		}
	}
}