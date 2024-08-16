#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	cin.ignore();
	while(t--){
		ll n;
		cin >> n;
		ll a[n];
		for(ll i = 0; i < n; i++){
			cin >> a[i];
		}
		vector<ll> vt;
		ll cnt = 0;
		for(ll i = 0; i < n; i++){
			if(a[i] != 0){
				vt.push_back(a[i]);
			}
			else{
				++cnt;
			}
		}	
		for(auto x : vt){
			cout << x << " ";
		}	
		while(cnt--){
			cout << "0 ";
		}
		cout << endl;
	}
}