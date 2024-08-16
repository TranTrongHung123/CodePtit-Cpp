#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		ll a[n];
		vector<pair<ll,ll>> vt;
		for(ll i = 0; i < n; i++){
			cin >> a[i];
			vt.push_back({a[i], abs(a[i] - k)});
		}
		stable_sort(vt.begin(), vt.end(), cmp);
		for(auto x : vt){
			cout << x.first << " ";
		}
		cout << endl;
	}
}