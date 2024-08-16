#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool check(ll n, ll k){
	ll d = n / k; 
	ll r = n % k; 
	ll sum1 = (k-1) * k / 2; 
	ll sum2 = (r + 1) * r / 2; 
	return (d * sum1 + sum2) == k;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << check(n,k) << endl;
	}
}