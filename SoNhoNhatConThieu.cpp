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
		for(ll i = 0; i < n - 1; i++){
			cin >> a[i];
		}
		ll sum1 = n*(n+1)/2, sum2 = 0;
		for(ll i = 0; i < n - 1; i++){
			sum2 += a[i];
		}
		cout << sum1 - sum2 << endl;
	}
}