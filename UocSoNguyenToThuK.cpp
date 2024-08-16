#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll solve(ll n, ll k){
	--k;
	vector<ll> vt;
	for(ll i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				vt.push_back(i);
				n /= i;
			}
		}
	}
	if(n != 1){
		vt.push_back(n);
	}
	if(k >= vt.size()){
		return -1;
	}
	else{
		return vt[k];
	}
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << solve(n,k) << endl;
	}
}