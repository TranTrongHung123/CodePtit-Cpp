#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n, m, k;
		cin >> n >> m >> k;
		ll a[n], b[m], c[k];
		map<ll,ll> mp;
		for(ll i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]] = 1;
		}
		for(ll i = 0; i < m; i++){
			cin >> b[i];
			if(mp[b[i]] == 1){
				mp[b[i]] = 2;
			}
		}
		for(ll i = 0; i < k; i++){
			cin >> c[i];
			if(mp[c[i]] == 2){
				mp[c[i]] = 3;
			}
		}
		bool ok = true;
		for(auto x : mp){
			if(x.second == 3){
				cout << x.first << " ";
				ok = false;
			}
		}		
		if(ok){
			cout << "-1";
		}
		cout << endl;
	}
}